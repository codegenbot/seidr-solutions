```cpp
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
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
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> res = get_odd_collatz(n);
    if(issame({1}, res)) {
        cout << "The sequence is Collatz Conjecture sequence." << endl;
    } else {
        cout << "The sequence is not Collatz Conjecture sequence." << endl;
    }
    return 0;
}