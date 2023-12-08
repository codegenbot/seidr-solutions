#include <iostream>
using namespace std;

int coin_sums(int cents) {
    int quarters = 0, dimes = 0, nickles = 0, pennies = 0;
    
    // Calculate the number of quarters
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }
    
    // Calculate the number of dimes
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }
    
    // Calculate the number of nickles
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }
    
    // Calculate the number of pennies
    while (cents > 0) {
        pennies++;
        cents--;
    }
    
    return quarters + dimes * 2 + nickles * 3 + pennies * 4;
}

int main() {
    int cents;
    cin >> cents;
    cout << coin_sums(cents) << endl;
    return 0;
}