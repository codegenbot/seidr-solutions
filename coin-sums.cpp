```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int dimesAndQuarters = cents / 10;
    int remainingCents = cents % 10;
    
    int dimes = dimesAndQuarters;
    int nickles = remainingCents / 5;
    remainingCents %= 5;
    
    int pennies = remainingCents;
    
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}