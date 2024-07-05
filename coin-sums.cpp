```cpp
#include <iostream>

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
    
    cout << "Quarters: " << std::to_string(quarters) << endl;
    cout << "Dimes: " << std::to_string(dimes) << endl;
    cout << "Nickles: " << std::to_string(nickles) << endl;
    cout << "Pennies: " << std::to_string(pennies) << endl;

    return 0;
}