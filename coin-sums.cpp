```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int remainingCents = cents; // rename penniesNeeded

    int quartersNeeded = 0;
    while(remainingCents >= 25) {
        remainingCents -= 25;
        quartersNeeded++;
    }

    int nicklesNeeded = 0;
    while(remainingCents >= 10) {
        remainingCents -= 10;
        nicklesNeeded += (remainingCents / 5);
        remainingCents %= 5;
    }
    while(remainingCents >= 5) {
        remainingCents -= 5;
        nicklesNeeded++;
    }

    int dimesNeeded = 0;
    while(remainingCents >= 10) {
        remainingCents -= 10;
        dimesNeeded++;
    }

    printCoins(quartersNeeded, nicklesNeeded, dimesNeeded, quartersNeeded);

    return 0;
}

void printCoins(int quarters, int nickles, int dimes, int pennies) {
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
}