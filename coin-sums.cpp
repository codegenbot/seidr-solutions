#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    cout << quarters << endl;

    if (cents > 0) {
        int dimes = cents / 10;
        cents %= 10;

        cout << dimes << endl;

        if (cents > 0) {
            int nickles = cents / 5;
            cents %= 5;

            cout << nickles << endl;

            if (cents > 0) {
                cout << cents << endl;
            }
        }
    }

    return 0;
}