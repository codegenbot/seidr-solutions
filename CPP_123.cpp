#include <vector>
#include <algorithm>

vector<int> get_odd_collatz(int n);

bool issame(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> collatz_result = get_odd_collatz(n);
    for (int num : collatz_result) {
        cout << num << " ";
    }
    return 0;
}