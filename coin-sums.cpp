
#include <iostream>
using namespace std;

int main() {
    int cents = 9640;
    int pennies = 0, nickles = 0, dimes = 0, quarters = 0;
    
    while (cents >= 1) {
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
    
    cout << pennies << " " << nickles << " " << dimes << " " << quarters << "\n";
    
    return 0;
}