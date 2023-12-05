```
#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Function to get the fewest number of US coins needed to make a given amount
int get_coin_sums(vector<int> coins, int total) {
    // Initialize a map to store the counts of each coin type
    map<int, int> counts;
    
    // Iterate through the coins and add them to the map
    for (int i = 0; i < coins.size(); i++) {
        if (coins[i] <= total) {
            counts[coins[i]]++;
        }
    }
    
    // Return the number of each coin type as a separate output
    return [counts[1], counts[5], counts[10], counts[25]];
}
```