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
    
    int nickles = cents / 5;
    cents %= 5;
    
    int pennies = cents;
    
    cout << "Quarters: " << to_string(quarters) << endl;
    cout << "Dimes: " << to_string(dimes) << endl;
    cout << "Nickles: " << to_string(nickles) << endl;
    cout << "Pennies: " << to_string(pennies) << endl;

    return 0;
}