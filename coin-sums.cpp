#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    int nickles = 0;
    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }

    cout << quarters << endl;
    cout << nickles << endl;
    cout << cents / 1 << endl; // dimes are worth 10 cents
    cout << cents % 1 * 100 << endl; // remaining pennies

    return 0;
}