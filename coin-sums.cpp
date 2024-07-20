```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << std::to_string(quarters) << " quarter(s), " << std::to_string(dimes) << " dime(s), " << std::to_string(nickels) << " nickel(s), and " << std::to_string(pennies) << " penny(ies)." << endl;

    return 0;
}