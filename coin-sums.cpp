```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int pennies = cents;
    cout << quarters << endl; 

    int dimes = (quarters + pennies) / 10;
    pennies = (quarters + pennies) % 10;

    int nickles = (dimes + pennies) / 5;
    pennies = (dimes + pennies) % 5;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}