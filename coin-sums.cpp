```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents % 5;
    cents /= 5;

    int nickles = cents / 10;
    cents %= 10;

    int dimes = 0;
    while (cents >= 25) {
        dimes++;
        cents -= 25;
    }

    int quarters = 0;
    while (cents >= 100) {
        quarters++;
        cents -= 100;
    }

    while (cents >= 25) {
        dimes++;
        cents -= 25;
    }

    while (cents >= 10) {
        nickles++;
        cents -= 10;
    }

    while (cents >= 5) {
        pennies++;
        cents -= 5;
    }

    string quarters_str = std::to_string(quarters);
    cout << quarters_str << endl;

    string dimes_str = std::to_string(dimes);
    cout << dimes_str << endl;

    string nickles_str = std::to_string(nickles);
    cout << nickles_str << endl;

    string pennies_str = std::to_string(pennies);
    cout << pennies_str << endl;

    return 0;
}