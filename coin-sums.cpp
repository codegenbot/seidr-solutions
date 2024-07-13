#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }
    
    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }
    
    int nickels = 0;
    while (cents >= 5) {
        cents -= 5;
        nickels++;
    }
    
    int pennies = cents;

    cout << "Coins: " << quarters << " quarters";
    if(quarters > 1) cout << "s ";
    cout << quarters << " remaining;\n";
    
    cout << "Dimes: " << dimes << endl;
    if(dimes > 1) cout << "s ";
    cout << dimes << " remaining;\n";
    
    cout << "Nickels: " << nickels << endl;
    if (nickels > 1) cout << "s ";
    cout << nickels << " remaining;\n";
    
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}