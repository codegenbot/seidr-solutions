#include <iostream>

using namespace std;

template<typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

void solve() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << compare_one(num1, num2) << endl;
}

int main() {
    solve();
    return 0;
}