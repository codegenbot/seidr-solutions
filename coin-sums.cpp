#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles and pennies in cents
    
    vector<int> results(4, 0); // initialize the result for each type of coin to 0
    
    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int numCoins = cents / coins[i];
            cents %= coins[i];
            results[i] = numCoins;
        }
    }
    
    cout << results[3] << endl; // print the number of pennies
    cout << results[2] << endl; // print the number of nickles
    cout << results[1] << endl; // print the number of dimes
    cout << results[0] << endl; // print the number of quarters
    
    return 0;
}