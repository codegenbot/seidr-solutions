#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins = {1, 5, 10, 25};
    vector<int> counts(4);
    
    for (int i = 0; i < n; i++) {
        int coin = coins[i % 4];
        if (coin == 25) {
            // Handle coins of value 25 cents
            counts[3]++;
            i += 3; // Skip the next 3 iterations since we already used a quarter
        } else {
            counts[coin - 1]++;
        }
    }
    
    cout << counts[0] << " " << counts[1] << " " << counts[2] << " " << counts[3] << endl;
    return 0;
}