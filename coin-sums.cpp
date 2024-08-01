#include <iostream>
using namespace std;

int pennies(int cents) {
    int quarters = cents / 25;
    int remainder = cents % 25;
    int dimes = remainder / 10;
    remainder %= 10;
    int nickles = remainder / 5;
    int pennies_needed = remainder % 5;
    
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies_needed << endl;

    return 0;
}

int main() {
    int cents;
    cin >> cents;
    pennies(cents);
    return 0;
}