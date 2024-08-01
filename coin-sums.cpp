#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles and pennies in cents

    int q = cents / 25; // calculate the number of quarters
    int rem = cents % 25;
    int d = rem / 10; // calculate the number of dimes
    rem %= 10;
    int n = rem / 5; // calculate the number of nickles
    int p = rem % 5; // calculate the number of pennies

    cout << q << endl;
    cout << d << endl;
    cout << n << endl;
    cout << p << endl;

    return 0;
}