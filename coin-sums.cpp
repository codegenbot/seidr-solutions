#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimesAndNickles = cents / 10;
    cents %= 10;

    int nickles = dimesAndNickles / 5;
    int dimes = dimesAndNickles % 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}