```c++
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = cents / 1;
    int nickles = cents / 5;
    int dimes = cents / 10;
    int quarters = cents / 25;

    // Calculate remaining cents for each coin type
    cents %= 25; // adjust for quarters
    pennies += cents / 1;
    cents %= 1; // remaining pennies

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    
    return 0;
}