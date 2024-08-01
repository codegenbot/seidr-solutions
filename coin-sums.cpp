#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1};
    vector<int> results(4);

    for(int i = 0; i < 4; ++i) {
        results[i] = cents / coins[i];
        cents %= coins[i];
    }
    
    for(int i = 0; i < 4; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}