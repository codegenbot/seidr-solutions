#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = 0, nickles = 0, dimes = 0, quarters = 0;
    
    // Calculate the number of quarters
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }
    
    // Calculate the number of dimes
    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }
    
    // Calculate the number of nickles
    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }
    
    // Calculate the number of pennies
    pennies = cents;

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}