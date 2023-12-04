
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int countCoins(int target, vector<int>& coins) {
    if (target == 0) {
        return 0;
    }
    
    map<int, int> coinCounts;
    
    for (int i = 0; i < coins.size(); ++i) {
        if (coins[i] <= target) {
            coinCounts[coins[i]]++;
            
            int remainingAmount = target - coins[i];
            int numCoins = countCoins(remainingAmount, coins);
            
            coinCounts[coins[i]] += numCoins;
        }
    }
    
    return coinCounts[coins[0]];
}

int main() {
    vector<int> coins = { 1, 2, 3, 4 };
    int target = 5;
    
    cout << "Number of coins needed to make " << target << ": ";
    cout << countCoins(target, coins) << endl;
    
    return 0;
}