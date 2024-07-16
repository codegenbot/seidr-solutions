#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = 0, nickels = 0, dimes = 0, quarters = 0;

    while(cents > 0) {
        if(cents >= 25) {
            quarters++;
            cents -= 25;
        } else if(cents >= 10) {
            dimes++;
            cents -= 10;
        } else if(cents >= 5) {
            nickels++;
            cents -= 5;
        } else {
            pennies++;
            cents--;
        }
    }

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}