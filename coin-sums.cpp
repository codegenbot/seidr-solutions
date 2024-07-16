#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    if(pennies > 0) {
        cout << pennies << endl; 
    } else {
        pennies = 0; 
    }

    return 0;
}