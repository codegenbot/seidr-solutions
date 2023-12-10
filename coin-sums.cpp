#include <vector>
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    vector<int> coins(4, 0);
    while (cents > 0) {
        if (cents >= 25) {
            coins[3] += cents / 25;
            cents %= 25;
        } else if (cents >= 10) {
            coins[2]++;
            cents -= 10;
        } else if (cents >= 5) {
            coins[1]++;
            cents -= 5;
        } else {
            coins[0]++;
            cents = 0;
        }
    }
    cout << coins[0] << " " << coins[1] << " " << coins[2] << " " << coins[3] << endl;
    return 0;
}