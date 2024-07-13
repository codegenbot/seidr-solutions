#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = 0;
    while (cents >= 1) {
        cents -= 1;
        pennies++;
    }

    int nickels = 0;
    while (cents >= 5) {
        cents -= 5;
        nickels++;
    }

    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    cout << "Pennies: " << pennies << endl;
    if(pennies > 1) cout << "s ";
    cout << pennies << " remaining;\n";

    cout << "Nickels: " << nickels << endl;
    if(nickels > 1) cout << "s ";
    cout << nickels << " remaining;\n";

    cout << "Dimes: " << dimes << endl;
    if(dimes > 1) cout << "s ";
    cout << dimes << " remaining;\n";

    cout << "Quarters: " << quarters << endl;
    if(quarters > 1) cout << "s ";
    cout << quarters << " remaining;\n";
    
    return 0;
}