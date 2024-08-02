#include <iostream>
using namespace std;

void coinSums() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickles, pennies
    vector<int> results(4);
    
    for (int i = 0; i < 4; ++i) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            results[i]++;
        }
    }
    
    cout << results[3] << endl;
    if (results[2] > 0) cout << results[2] << endl;
    else cout << "0" << endl;
    if (results[1] > 0) cout << results[1] << endl;
    else cout << "0" << endl;
    if (results[0] > 0) cout << results[0] << endl;
    else cout << "0" << endl;
}

int main() {
    coinSums();
    return 0;
}