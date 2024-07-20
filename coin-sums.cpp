#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
        if (cents >= 10) {
            int temp = cents / 10;
            cents %= 10;
            cout << temp << endl;
        }
        else if (cents >= 5) {
            cout << cents / 5 << endl;
            cents %= 5;
        }
        else {
            cout << cents << endl;
        }
    }

    return 0;
}