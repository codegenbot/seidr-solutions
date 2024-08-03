#include <iostream>
using namespace std;

void printCoins(int quarters, int dimes, int nickles, int pennies) {
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;
}

int main() {
    int cents;

    cin >> cents;

    int remainingCents = cents;
    int quartersNeeded = 0;
    int dimesNeeded = 0;
    int nicklesNeeded = 0;
    int penniesNeeded = 0;

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

    printCoins(quartersNeeded, dimesNeeded, nicklesNeeded, penniesNeeded);

    return 0;
}