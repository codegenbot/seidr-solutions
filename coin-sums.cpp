#include <iostream>
using namespace std;

int coin_sums(int cents) {
    int quarters = 0, dimes = 0, nickles = 0, pennies = 0;
    
    // Calculate the number of coins for each denomination
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
    
    return quarters * 25 + dimes * 10 + nickles * 5 + pennies;
}

int main() {
    int cents;
    cin >> cents;
    cout << coin_sums(cents) << endl;
    return 0;
}