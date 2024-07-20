#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    while (cents > 0) {
        if (cents >= 25) {
            quarters++;
            cents -= 25;
        } else if (cents >= 10) {
            dimes++;
            cents -= 10;
        } else if (cents >= 5) {
            nickels++;
            cents -= 5;
        } else {
            pennies = cents;
            break;
        }
    }

    cout << quarters << " quarter(s), " << dimes << " dime(s), " << nickels << " nickel(s), and " << pennies << " penny(ies)." << endl;

    return 0;
}