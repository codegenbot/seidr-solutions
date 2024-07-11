#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, 99); // max number of quarters is 99
    cents %= 25;

    int dimes = min(cents / 10, (cents % 25) / 10);
    cents %= 10;

    int nickles = min(cents / 5, (cents % 10) / 5);
    cents %= 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << cents << endl;

    return 0;
}