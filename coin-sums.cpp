#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1};
    vector<int> results(4);
    
    for(int i = 0; i < 4; i++) {
        while(cents >= coins[i]) {
            results[i]++;
            cents -= coins[i];
        }
    }
    
    cout << results[3] << endl;
    cout << results[2] << endl;
    cout << results[1] << endl;
    cout << results[0] << endl;

    return 0;
}