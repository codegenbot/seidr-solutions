```
#include <iostream>
using namespace std;
void coinSums(int cents) {
    int pennies = 0, nickles = 0, dimes = 0, quarters = 0;
    while (cents > 0) {
        if (cents >= 25) {
            quarters++;
            cents -= 25;
        } else if (cents >= 10) {
            dimes++;
            cents -= 10;
        } else if (cents >= 5) {
            nickles++;
            cents -= 5;
        } else {
            pennies++;
            cents--;
        }
    }
    cout << "Number of pennies: " << pennies << endl;
    cout << "Number of nickles: " << nickles << endl;
    cout << "Number of dimes: " << dimes << endl;
    cout << "Number of quarters: " << quarters << endl;
}
```