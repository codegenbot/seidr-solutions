#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25;

    cout << quarters << endl; 

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    cout << dimes << endl; 

    int nickles = remainingCents / 5;
    remainingCents %= 5;

    cout << nickles << endl; 

    int pennies = 0;
    while (remainingCents > 0) {
        pennies++;
        remainingCents--;
    }
    cout << pennies << endl; 

    return 0;
}