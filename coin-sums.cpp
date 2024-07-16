#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    int total_quarters = cents / 25;
    cents %= 25;

    int total_dimes = cents / 10;
    cents %= 10;

    int total_nickles = cents / 5;
    cents %= 5;
    int pennies = cents;
    int nickles_and_pennies = total_nickles + (total_nickles > 0 ? 1 : 0);

    cout << total_quarters << endl;
    cout << total_dimes << endl;
    cout << nickles_and_pennies << endl;
    cout << pennies << endl;
}