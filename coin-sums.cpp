#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    for (int i = 0; i < cents / 25; ++i) {
        cout << "quarter" << endl;  
        quarters++;
        cents %= 25;
    }

    for (int i = 0; i < cents / 10; ++i) {
        cout << "dime" << endl;      
        dimes++;
        cents %= 10;
    }

    for (int i = 0; i < cents / 5; ++i) {
        cout << "nickel" << endl;    
        nickels++;
        cents %= 5;
    }

    pennies = cents;

    cout << quarters << endl;  
    cout << dimes << endl;      
    cout << nickels << endl;    
    cout << pennies << endl;

    return 0;
}