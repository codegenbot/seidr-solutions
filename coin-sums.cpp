#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int max_quarters = min(cents / 25, 99);
    int quarters = max_quarters;
    cents %= 25;

    if (cents > 0) {
        int max_dimes = min(cents / 10, 9);
        int dimes = max_dimes;
        cents %= 10;
        
        if (cents > 0) {
            int max_nickles = min(cents / 5, 4);
            int nickles = max_nickles;
            cents %= 5;
            
            if (cents > 0) {
                pennies = cents;
            }
        } else {
            pennies = 0;
        }
    } else {
        quarters = 0;
        dimes = 0;
        nickles = 0;
        pennies = 0;
    }

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}