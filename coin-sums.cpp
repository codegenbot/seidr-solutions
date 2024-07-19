#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    if(dimes > cents / 5) dimes = cents / 5;
    cents %= 10;

    int nickles = cents / 5;
    if(nickles > (cents % 10) / 1) nickles = (cents % 10) / 1;
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}