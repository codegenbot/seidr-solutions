#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int max_quarters = min(cents / 25, (int)std::ceil((double)cents / 25));
    cents -= max_quarters * 25;
    cout << max_quarters << endl;

    int max_dimes = min(cents / 10, (int)std::ceil((double)cents / 10.0));
    cents -= max_dimes * 10;
    cout << max_dimes << endl;

    int max_nickels = min(cents / 5, (int)std::ceil((double)cents / 5.0));
    cents -= max_nickels * 5;
    cout << max_nickels << endl;

    int pennies = cents;
    cout << pennies << endl;

    return 0;
}