#include <iostream>
using namespace std;
int main() {
    int cents, totalCoins = 0;
    cin >> cents;
    
    // Initialize counters for each type of coin
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    
    while (cents > 0) {
        if (cents >= 25) {
            totalCoins++;
            quarters++;
            cents -= 25;
        } else if (cents >= 10) {
            totalCoins++;
            dimes++;
            cents -= 10;
        } else if (cents >= 5) {
            totalCoins++;
            nickels++;
            cents -= 5;
        } else {
            totalCoins++;
            pennies++;
            cents--;
        }
    }
    
    // Print the number of each type of coin
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}