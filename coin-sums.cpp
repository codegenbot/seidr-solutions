#include <iostream>
using namespace std;

void coinSums(int cents) {
    int quarterCount = cents / 25;
    quarters = (quarterCount > 0)? quarterCount : 0;
    cents %= 25;
    int dimes = (cents / 10) > 0 ? cents / 10 : 0;
    cents %= 10;
    int nickles = (cents / 5) > 0 ? cents / 5 : 0;
    cents %= 5;
    int pennies = (cents > 0)? cents : 0;

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