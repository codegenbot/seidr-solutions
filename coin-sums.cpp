#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; 
    cents %= 25; 
    int total_quarters = min(quarters, cents / 25); 
    int remaining_cents = cents % 25;
    int quarterCount = total_quarters;

    int dimes = remaining_cents / 10;
    remaining_cents %= 10;
    int dimeCount = dimes;

    int nickles = remaining_cents / 5;
    remaining_cents %= 5;
    int nickelCount = nickles;

    int pennies = remaining_cents;

    cout << quarterCount << endl;
    cout << nickelCount << endl;
    cout << dimeCount << endl;
    cout << pennies << endl;

    return 0;
}