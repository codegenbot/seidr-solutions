```
#include <iostream>
using namespace std;

int get_coin_sums(int coins[], int total) {
    // Initialize a dictionary to store the counts for each coin type
    int counts[4] = {0, 0, 0, 0};

    // Loop through the coins and increment the count for each coin type
    for (int i = 0; i < total; i++) {
        if (coins[i] <= total) {
            counts[coins[i]]++;
        }
    }

    return counts;
}

int main() {
    int coins[] = {1, 2, 3, 4, 5};
    int total = 10;
    int counts[4];

    // Call the function to get the coin sums
    counts = get_coin_sums(coins, total);

    // Print the results
    for (int i = 0; i < 4; i++) {
        cout << "Coin type " << i + 1 << ": " << counts[i] << endl;
    }

    return 0;
}
```