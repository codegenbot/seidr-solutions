#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickles = (cents % 100) / 5;
    int dimes = ((cents % 100) % 50) / 10;
    int quarters = (((cents % 100) % 50) % 50) / 25;

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}