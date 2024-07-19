```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    int remaining = cents % 25;
    int dimes = remaining / 10;
    int remaining2 = remaining % 10;
    int nickles = remaining2 / 5;
    int pennies = remaining2 % 5;
    
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    
    return 0;
}