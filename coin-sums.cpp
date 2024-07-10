#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {25, 10, 5, 1}; // quarter, dime, nickel, penny
    vector<int> coinsNeeded(4, 0);

    for (int i = 0; i < 4; i++) {
        while (cents >= coinValues[i]) {
            cents -= coinValues[i];
            coinsNeeded[i]++;
        }
    }

    cout << coinsNeeded[0] << endl;
    cout << coinsNeeded[1] << endl;
    cout << coinsNeeded[2] << endl;
    cout << coinsNeeded[3] << endl;

    return 0;
}