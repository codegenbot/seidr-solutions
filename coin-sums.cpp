#include <iostream>
using namespace std;

void coinSums(int cents) {
    int quarters = cents / 25;
    cents -= 25 * quarters; 
    int dimes = cents / 10;
    cents %= 10;
    int nickles = cents / 5;
    cents %= 5;
    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;
}

int main() {
    int cents;
    cin >> cents;
    coinSums(cents);
    return 0;
}