#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1};
    vector<int> count(coins.size(), 0);
    
    for(int i = 0; i < coins.size(); i++) {
        while(cents >= coins[i]) {
            int countCoin = cents / coins[i];
            cents %= coins[i];
            count[i] = countCoin;
        }
    }
    
    cout << count[0] << endl;
    cout << count[1] << endl;
    cout << count[2] << endl;
    cout << count[3] << endl;

    return 0;
}