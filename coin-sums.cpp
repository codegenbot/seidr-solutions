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

    cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << endl;
    cout << dimes << " dime" << (dimes > 1 ? "s" : "") << endl;
    cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << endl;
    cout << pennies << " penny" << (pennies > 1 ? "s" : "") << endl;

    return 0;
}