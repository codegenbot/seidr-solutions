#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remaining_cents = cents % 25; 

    int dimes = remaining_cents / 10;
    int remaining_nickels_pennies = remaining_cents % 10; 

    int nickels = remaining_nickels_pennies / 5;
    int pennies = remaining_nickels_pennies % 5;

    while (remaining_cents > 0) {
        if (quarters > 0 && remaining_cents >= 25) {
            remaining_cents -= 25;
            quarters--;
        } else if (dimes > 0 && remaining_cents >= 10) {
            remaining_cents -= 10;
            dimes--;
        } else if (nickels > 0 && remaining_cents >= 5) {
            remaining_cents -= 5;
            nickels--;
        } else {
            remaining_cents -= 1;
            pennies++;
        }
    }

    cout << quarters << endl; 
    cout << dimes << endl; 
    cout << nickels << endl; 
    cout << pennies << endl; 

    return 0;
}