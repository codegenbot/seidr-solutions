#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {25, 10, 5, 1};
    vector<int> coins(4);

    for (int i = 0; i < 4; i++) {
        while (cents >= coinValues[i]) {
            coins[i]++;
            cents -= coinValues[i];
        }
    }

    cout << coins[0] << endl;
    cout << coins[1] << endl;
    cout << coins[2] << endl;
    cout << coins[3] << endl;

    return 0;
}