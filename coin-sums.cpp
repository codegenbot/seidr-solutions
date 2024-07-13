#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = 0, nickles = 0, dimes = 0, quarters = 0;

    while (cents > 0) {
        if (cents >= 25) {
            quarters++;
            cents -= 25;
        } else if (cents >= 10) {
            dimes++;
            cents -= 10;
        } else if (cents >= 5) {
            nickles++;
            cents -= 5;
        } else {
            pennies = cents;
            break;
        }
    }

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}