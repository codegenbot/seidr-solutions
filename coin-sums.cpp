#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    int quarters = amount / 25;
    int dimes = (amount % 25) / 10;
    int nickels = ((amount % 25) % 10) / 5;
    int pennies = ((amount % 25) % 10) % 5;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}