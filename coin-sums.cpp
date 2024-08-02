#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {1, 5, 10, 25}; // values of pennies, nickles, dimes, quarters in cents
    vector<int> coins; // number of each type of coin

    for (int i = 3; i >= 0; --i) {
        while (cents >= coinValues[i]) {
            cents -= coinValues[i];
            coins.push_back(1);
        }
        if (coins.back() == 0)
            coins.pop_back();
    }

    cout << coins[3] << endl;
    cout << coins[2] << endl;
    cout << coins[1] << endl;
    cout << coins[0] << endl;

    return 0;
}