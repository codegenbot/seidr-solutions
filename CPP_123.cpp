```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> output = get_odd_collatz(num);
    if (issame(output, {1})) {
        cout << "The sequence ends at 1." << endl;
    } else {
        cout << "The sequence is: ";
        for (int i : output) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}