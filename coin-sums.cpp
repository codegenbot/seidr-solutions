```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 100;
    cents %= 100;

    int nickels = cents / 20; 
    cents %= 20;

    int dimes = cents / 10; 
    cents %= 10;

    int quarters = cents / 25;
    
    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}