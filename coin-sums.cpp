#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, max_quarters);
    cents %= 25;

    if (cents > 0) {
        cout << quarters << endl;
        int dimes = min(cents / 10, max_quarters + quarters);
        cents %= 10;

        if (cents > 0) {
            cout << dimes << endl;
            int nickles = min(cents / 5, dimes + quarters + quarters);
            cents %= 5;

            if (cents > 0) {
                cout << nickles << endl;
                cout << cents << endl;
            } else {
                cout << nickles << endl;
            }
        } else {
            cout << dimes << endl;
            cout << nickles << endl;
            cout << cents << endl;
        }
    } else {
        cout << quarters << endl;
        cout << dimes << endl;
        cout << nickles << endl;
        cout << cents << endl;
    }

    return 0;
}