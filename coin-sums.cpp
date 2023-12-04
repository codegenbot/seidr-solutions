#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int countCoins(int target, vector<int>& coins) {
    // Base case: If the target amount is 0, return 0.
    if (target == 0) {
        return 0;
    }
    
    // Initialize a map to store the number of coins for each denomination.
    map<int, int> coinCounts;
    
    // Loop through all possible combinations of coins that can be used to make the target amount.
    for (int i = 0; i < coins.size(); ++i) {
        // Check if the current coin denomination is less than or equal to the target amount.
        if (coins[i] <= target) {
            // Add the number of coins of the current denomination to the map.
            coinCounts[coins[i]]++;
            
            // Recursively call the function with the remaining amount and the same vector of coins.
            int remainingAmount = target - coins[i];
            int numCoins = countCoins(remainingAmount, coins);
            
            // Add the number of coins from the recursive call to the map.
            coinCounts[coins[i]] += numCoins;
        }
    }
    
    // Return the total number of coins needed to make the target amount.
    return coinCounts[coins[0]];
}