#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int totalQuarters = quarters;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    int dimes = cents / 10;
    cents %= 10;

    int totalDimes = dimes;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    int nickles = cents / 5;
    cents %= 5;

    int totalNickles = nickles;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    int pennies = cents;

    cout << totalQuarters << endl;
    cout << totalDimes << endl;
    cout << totalNickles << endl;
    cout << pennies << endl;

    return 0;
}