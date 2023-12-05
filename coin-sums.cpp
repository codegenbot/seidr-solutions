```cpp
#include <iostream>
#include <vector>
using namespace std;

void get_coin_sums(int coins[], int total) {
    // Initialize a dictionary to store the counts for each coin type
    int counts[4] = {0, 0, 0, 0};

    // Loop through the coins and increment the count for each coin type
    for (int i = 0; i < total; i++) {
        if (coins[i] <= total) {
            counts[coins[i]]++;
        }
    }

    return [counts[1], counts[5], counts[10], counts[25]];
}

int main() {
    // Test case 1:
    int coins[] = {1, 2, 3, 4, 5};
    int total = 1;
    int result = get_coin_sums(coins, total);
    cout << "Result for test case 1: " << result[0] << ", " << result[1] << ", " << result[2] << ", " << result[3] << endl;

    // Test case 2:
    coins = {1, 2, 3, 4, 5};
    total = 2;
    result = get_coin_sums(coins, total);
    cout << "Result for test case 2: " << result[0] << ", " << result[1] << ", " << result[2] << ", " << result[3] << endl;

    // Test case 3:
    coins = {1, 2, 3, 4, 5};
    total = 3;
    result = get_coin_sums(coins, total);
    cout << "Result for test case 3: " << result[0] << ", " << result[1] << ", " << result[2] << ", " << result[3] << endl;

    // Test case 4:
    coins = {1, 2, 3, 4, 5};
    total = 4;
    result = get_coin_sums(coins, total);
    cout << "Result for test case 4: " << result[0] << ", " << result[1] << ", " << result[2] << ", " << result[3] << endl;

    // Test case 5:
    coins = {1, 2, 3, 4, 5};
    total = 5;
    result = get_coin_sums(coins, total);
    cout << "Result for test case 5: " << result[0] << ", " << result[1] << ", " << result[2] << ", " << result[3] << endl;
}
```