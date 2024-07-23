```
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = cents;
    cout << "Quarters: " << pennies / 25 << endl;
    pennies %= 25;
    
    cout << "Dimes: " << pennies / 10 << endl;
    pennies %= 10;
    
    cout << "Nickles: " << pennies / 5 << endl;
    pennies %= 5;
    
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}