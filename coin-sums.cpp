#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    float quarters = cents / 25.0; // Update this line
    cents %= 25;

    int dimes = static_cast<int>(cents / 10);
    cents %= 10;

    int nickles = static_cast<int>(cents / 5);
    cents %= 5;

    int pennies = static_cast<int>(cents);

    cout << ceil(quarters) << endl;
    cout << ceil(dimes) << endl;
    cout << ceil(nickles) << endl;
    cout << pennies << endl;

    return 0;
}