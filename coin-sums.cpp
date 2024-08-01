#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1};
    vector<int> counts(4);
    
    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            counts[i]++;
        }
    }
    
    cout << counts[3] << endl;
    cout << counts[2] << endl;
    cout << counts[1] << endl;
    cout << counts[0] << endl;

    return 0;
}