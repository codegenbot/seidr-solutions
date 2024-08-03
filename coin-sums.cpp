#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles and pennies in cents

    int q = cents / 25; // number of quarters
    cents %= 25;
    int d = cents / 10; // number of dimes
    cents %= 10;
    int n = cents / 5; // number of nickles
    cents %= 5;
    int p = cents; // number of pennies

    cout << q << endl;
    cout << d << endl;
    cout << n << endl;
    cout << p << endl;

    return 0;
}