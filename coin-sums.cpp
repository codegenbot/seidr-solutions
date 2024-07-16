#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int totalQuarters = cents / 25;
    while (totalQuarters > 0) {
        if (totalQuarters + (cents % 25) >= 25) {
            break;
        }
        totalQuarters--;
        cents += 25;
    }
    quarters = totalQuarters;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}