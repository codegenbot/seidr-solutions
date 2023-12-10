#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins = {1, 5, 10, 25};
    vector<int> counts = {0, 0, 0, 0};
    for (int i = 0; i < 4; i++) {
        counts[i] = (n - counts[i-1]) / coins[i];
        n %= coins[i];
    }
    cout << counts[0] + counts[1] + counts[2] + counts[3] << " " << counts[1] << " " << counts[2] << " " << counts[3] << endl;
    return 0;
}