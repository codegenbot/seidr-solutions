#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {1, 5, 10, 25}; // pennies, nickles, dimes, quarters
    vector<int> coins(4);

    for (int i = 3; i >= 0; --i) {
        while (cents >= coinValues[i]) {
            cents -= coinValues[i];
            ++coins[i];
        }
    }

    cout << coins[3] << endl;
    cout << coins[2] << endl;
    cout << coins[1] << endl;
    cout << coins[0] << endl;

    return 0;
}