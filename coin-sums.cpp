#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels and pennies
    
    vector<int> result(4); // to store the number of each type of coin
    
    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            result[i]++;
        }
    }
    
    cout << result[3] << endl; // print the number of pennies
    cout << result[2] << endl; // print the number of nickels
    cout << result[1] << endl; // print the number of dimes
    cout << result[0] << endl; // print the number of quarters
    
    return 0;
}