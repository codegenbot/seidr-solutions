#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    int remaining = cents % 25;

    int nickles = remaining / 5;
    remaining %= 5;

    int dimes = remaining / 10;
    remaining %= 10;

    int pennies = remaining;
    
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    
    return 0;
}