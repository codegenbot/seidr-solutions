#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents;

    int quarters = pennies / 25;
    pennies %= 25;

    int dimes = pennies / 10;
    pennies %= 10;

    int nickles = pennies / 5;
    pennies %= 5;

    int remaining = pennies;
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << remaining / 1 << endl; // output pennies
    return 0;
}