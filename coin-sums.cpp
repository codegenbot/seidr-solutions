#include <iostream>
using namespace std;

int pennies(int cents) {
    return cents;
}

void printCoins(int pennies, int nickles, int dimes, int quarters) {
    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
}

int main() {
    int cents;

    cin >> cents;

    int penniesNeeded = cents;
    int nicklesNeeded = 0;
    int dimesNeeded = 0;
    int quartersNeeded = 0;

    while(penniesNeeded >= 25) {
        penniesNeeded -= 25;
        quartersNeeded++;
    }

    while(penniesNeeded >= 10) {
        penniesNeeded -= 10;
        dimesNeeded++;
    }

    while(penniesNeeded >= 5) {
        penniesNeeded -= 5;
        nicklesNeeded++;
    }

    penniesNeeded = penniesNeeded;

    printCoins(penniesNeeded, nicklesNeeded, dimesNeeded, quartersNeeded);

    return 0;
}