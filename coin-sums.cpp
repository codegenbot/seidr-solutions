```cpp
#include <iostream>
using namespace std;

int pennies(int cents) {
    return cents;
}

void printCoins(int quarters, int nickles, int dimes, int remainingCents) {
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << remainingCents << endl;
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

    int remainingCents = penniesNeeded;

    printCoins(quartersNeeded, nicklesNeeded + (remainingCents / 5), 
           dimesNeeded + ((remainingCents % 5) / 10), 
           quartersNeeded + (remainingCents / 25));

    return 0;
}