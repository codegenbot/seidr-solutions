#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = cents;
    cout << "Quarters: " << pennies / 25 << endl;
    pennies %= 25;
    cout << "Pennies: " << pennies / 5 << endl;
    pennies %= 5;
    cout << "Nickles: " << pennies / 10 << endl;
    pennies %= 10;
    cout << "Dimes: " << pennies << endl;
    
    return 0;
}