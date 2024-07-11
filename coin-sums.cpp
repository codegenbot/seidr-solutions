#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<vector<int>> dp(cents + 1, vector<int>(4));

    for (int i = 0; i <= cents; i++) {
        if(i == 0) {
            dp[i][3] = 0;
        } else {
            dp[i][3] = i;
            for (int j = 3; j >= 0; j--) {
                if (coins[j] > i) {
                    dp[i][j] = dp[i][j + 1];
                } else {
                    dp[i][j] = min(dp[i - coins[j]][j] + 1, dp[i][j + 1]);
                }
            }
        }
    }

    int pennies = cents;
    int quarters = dp[cents][3], dimes = (pennies-25*quarters)/10, nickels = (pennies-25*quarters-10*dimes)/5, remainingPennies = pennies-25*quarters-10*dimes-5*nickels;

    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickels << endl;
    cout << "Pennies: " << remainingPennies << endl;

    return 0;
}