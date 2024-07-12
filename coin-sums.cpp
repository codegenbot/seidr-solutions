#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (quarters * 25 <= cents) {
        cents -= 25 * quarters;
        quarters++;
    }
    
    int dimes = cents / 10;
    while (dimes * 10 <= cents) {
        cents -= 10 * dimes;
        dimes++;
    }

    int nickles = cents / 5;
    while (nickles * 5 <= cents) {
        cents -= 5 * nickles;
        nickles++;
    }
    
    int pennies = cents;

    cout << quarters << endl; 
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}