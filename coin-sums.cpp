#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    cout << "Quarters: " << cents / 25 << endl;
    cents %= 25;

    cout << "Dimes: " << cents / 10 << endl;
    cents %= 10;

    cout << "Nickles: " << cents / 5 << endl;
    cents %= 5;

    cout << "Pennies: " << cents << endl;

    return 0;
}