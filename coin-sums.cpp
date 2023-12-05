```
#include <iostream>
using namespace std;

int get_coin_sums(int coins[], int total) {
    // Initialize a dictionary to store the counts for each coin type
    int counts[] = {0, 0, 0, 0};

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
    int total = 5;

    int result[] = get_coin_sums(coins, total);

    cout << "Number of pennies: " << result[0] << endl;
    cout << "Number of nickles: " << result[1] << endl;
    cout << "Number of dimes: " << result[2] << endl;
    cout << "Number of quarters: " << result[3] << endl;

    return 0;
}
```