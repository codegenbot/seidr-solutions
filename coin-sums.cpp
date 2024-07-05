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
    
    std::cout << "Quarters: " << quarters << " coins\n";
    std::cout << "Dimes: " << dimes << " coins\n";
    std::cout << "Nickles: " << nickles << " coins\n";
    std::cout << "Pennies: " << pennies << " coins\n";

    return 0;
}