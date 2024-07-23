#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = 0;
    while (cents >= 100) {
        cents -= 100;
        quarters++;
    }

    int nickles = 0;
    while (cents >= 25) {
        cents -= 25;
        pennies += 4; 
    }

    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        pennies += 2; 
    }

    pennies = cents;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}