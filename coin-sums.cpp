#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels, pennies in cents
    
    vector<int> result(4, 0); // initialize the result with zeros
    
    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int count = min(cents / coins[i], INT_MAX);
            cents -= count * coins[i];
            result[i] = count;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        cout << result[i] << endl;
    }
    
    return 0;
}