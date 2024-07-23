#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int nickles = cents / 5;
    cents %= 5;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    int dimes = cents / 10;
    cents %= 10;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }
    
    int pennies = (cents % 10);

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}