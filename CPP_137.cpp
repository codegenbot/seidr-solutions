#include <boost/any.hpp>
#include <string>

using namespace std;

template<typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

/*************************************************************
You don't need to modify the code above this line.
Only modify the code below this line.
*************************************************************/

#include <iostream>

void solve() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << compare_one(num1, num2) << endl;
}

int main() {
    solve();
    return 0;
}