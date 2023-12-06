#include <iostream>
using namespace std;
int main() {
    int cents, totalCoins = 0;
    cin >> cents;
    
    // Initialize counters for each type of coin
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    
    while (cents > 0) {
        if (cents >= 25) {
            totalCoins++;
            quarters++;
            cents -= 25;
        } else if (cents >= 10) {
            totalCoins++;
            dimes++;
            cents -= 10;
        } else if (cents >= 5) {
            totalCoins++;
            nickels++;
            cents -= 5;
        } else {
            totalCoins++;
            pennies++;
            cents--;
        }
    }
    
    // Return the number of each type of coin
    return quarters * 25 + dimes * 10 + nickels * 5 + pennies;
}
```
This code will return the total number of coins needed to make up the input amount, without printing anything. To print the result, you can call this function and then print the returned value:
```
int result = main();
cout << "Coin count: " << result << endl;
```