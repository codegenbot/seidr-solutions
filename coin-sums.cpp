#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = 0;
    while (cents > 0) {
        if (cents >= 25) {
            cents -= 25;
            quarters++;
        } else if (cents >= 10) {
            int temp = cents / 10;
            cents %= 10;
            dimes++;
        } else if (cents >= 5) {
            nickles++;
            cents -= 5;
        } else {
            pennies += cents;
            break;
        }
    }

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}