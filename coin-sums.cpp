#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = 0;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }
    
    int nickles = cents / 10;
    cents %= 10;
    
    int dimes = cents / 5;
    cents %= 5;
    
    int pennies = 0;
    while (cents > 0) {
        if (cents >= 25) {
            quarters++;
            cents -= 25;
        } else if (cents >= 10) {
            nickles++;
            cents -= 10;
        } else if (cents >= 5) {
            dimes++;
            cents -= 5;
        } else {
            pennies += cents;
            break;
        }
    }
    
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;
    
    return 0;
}