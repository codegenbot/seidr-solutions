#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    int total_quarters = min(cents/25, (cents/(25*2))/2);
    cents %= 25*(total_quarters);

    int total_dimes = min(cents/10, (cents%(25*2))/(25/4.0));
    cents %= 10*total_dimes;

    int nickles_and_pennies = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << total_quarters << endl;
    cout << total_dimes << endl;
    cout << nickles_and_pennies << endl;
    cout << pennies << endl;
}