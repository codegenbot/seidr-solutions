#include <iostream>
using namespace std;

int main() {
    int cents, pennies = 0, nickles = 0, dimes = 0, quarters = 0;
    cin >> cents;
    
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }
    pennies = cents;
    
    cout << quarters << " " << dimes << " " << nickles << " " << pennies << endl;
    
    return 0;
}