#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = 0, nickels = 0, dimes = 0, quarters = 0;

    while (cents >= 1) {
        cents -= 1;
        pennies++;
    }

    while (cents >= 5) {
        cents -= 5;
        nickels++;
    }

    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }

    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    cout << quarters << endl;  
    cout << dimes << endl;      
    cout << nickels << endl;    
    cout << pennies << endl;

    return 0;
}