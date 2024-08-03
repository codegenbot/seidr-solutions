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
    int quartersNeeded = 0;
    int nicklesNeeded = 0;
    int dimesNeeded = 0;

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

    printCoins(quartersNeeded, nicklesNeeded + (remainingCents / 5), 
               dimesNeeded + ((remainingCents % 5) / 10), 
               remainingCents);

    return 0;
}