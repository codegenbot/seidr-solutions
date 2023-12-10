#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int cents;
    cin >> cents;
    vector<int> coins(4, 0);
    for (int i = 0; i < cents; i++) {
        if (i % 25 == 0) {
            coins[3]++;
        } else if (i % 10 == 0) {
            coins[2]++;
        } else if (i % 5 == 0) {
            coins[1]++;
        } else {
            coins[0]++;
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << coins[i] << " ";
    }
    return 0;
}