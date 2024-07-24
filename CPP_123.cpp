```cpp
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> getOddCollatz(int n) {
    vector<int> res; 
    res.push_back(n); 
    while (n > 1) {
        if (n % 2 == 0 && n != 1) {
            if (n / 2 > std::numeric_limits<int>::max() / 2) {
                return res;
            }
            if ((n / 2) <= std::numeric_limits<int>::max()) {
                n = n / 2;
            } else {
                return res;
            }
        } else {
            if (n * 3 + 1 > std::numeric_limits<int>::max()) {
                return res;
            }
            res.push_back(n);
            if ((n * 3 + 1) <= std::numeric_limits<int>::max()) {
                n = (n * 3 + 1);
            } else {
                return res;
            }
        }
    }
    return res;
}

void startProgram() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cerr << "Error: Please enter a positive integer." << endl;
        return;
    }
    vector<int> res = getOddCollatz(n);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    if (!res.empty()) {
        if (isSame(res, getOddCollatz(1))) {
            cout << "The sequence is the same as Collatz Conjecture." << endl;
        } else {
            cout << "The sequence does not match Collatz Conjecture." << endl;
        }
    } else {
        assert(isSame(getOddCollatz(1), {1}));
        cout << "The sequence does not match Collatz Conjecture." << endl;
    }
}

int main() {
    startProgram();
    return 0;
}