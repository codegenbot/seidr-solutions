#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = cents / 1;
    int nickles = cents / 5 - (pennies / 100);
    int dimes = cents / 10 - ((nickles * 20) + (pennies / 25));
    int quarters = cents / 25 - ((dimes * 2) + (nickles * 4) + (pennies / 125));

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}