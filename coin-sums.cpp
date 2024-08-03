#include <iostream>
using namespace std;

int pennies(int cents) {
    return cents;
}

void printCoins(int quarters, int nickles, int dimes, int pennies) {
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
}

int main() {
    int cents;

    cin >> cents;

    int remainingCents = cents;
    int penniesNeeded = 0;
    int nicklesNeeded = 0;
    int dimesNeeded = 0;
    int quartersNeeded = 0;

    while(remainingCents >= 25) {
        remainingCents -= 25;
        quartersNeeded++;
    }

    while(remainingCents >= 10) {
        remainingCents -= 10;
        dimesNeeded++;
    }

    while(remainingCents >= 5) {
        remainingCents -= 5;
        nicklesNeeded++;
    }

    penniesNeeded = remainingCents;

    printCoins(quartersNeeded, nicklesNeeded + (penniesNeeded / 5), 
               dimesNeeded + ((penniesNeeded % 5) / 10), 
               quartersNeeded + (penniesNeeded / 25));

    return 0;
}