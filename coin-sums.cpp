#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = 0;
    int nickles = 0;
    int dimes = 0;
    int quarters = 0;
    
    while (cents > 0) {
        if (cents >= 25) {
            cents -= 25;
            quarters++;
        } else if (cents >= 10) {
            cents -= 10;
            dimes++;
        } else if (cents >= 5) {
            cents -= 5;
            nickles++;
        } else {
            cents--;
            pennies++;
        }
    }
    
    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}