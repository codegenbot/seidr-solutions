#include <iostream>
using namespace std;

void findCoinSum(int cents) {
    int pennies = cents / 1;
    int nickles = cents / 5 - pennies;
    int dimes = cents / 10 - nickles * 2;
    int quarters = cents / 25 - dimes * 2 - nickles * 4;

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
}

int main() {
    int cents;
    cin >> cents;
    findCoinSum(cents);
    return 0;
}