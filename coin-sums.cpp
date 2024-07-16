```c++
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    int total_quarters = cents / 25;
    cents %= 25;

    int total_dimes = cents / 10;
    cents %= 10;

    int nickles_and_pennies = cents / 5;
    cents %= 5;

    int total_nickels = nickles_and_pennies / 5;
    nickles_and_pennies %= 5;
    int pennies = nickles_and_pennies;

    cout << total_quarters << endl;
    cout << total_dimes << endl;
    cout << total_nickels << endl;
    cout << pennies << endl;
}