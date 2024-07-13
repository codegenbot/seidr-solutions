```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }
    
    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }
    
    int nickels = 0;
    while (cents >= 5) {
        cents -= 5;
        nickels++;
    }
    
    int pennies = cents;

    cout << "Coins: ";
    if(quarters > 1) cout << quarters << " quarter" << 's' << endl;
    else cout << quarters << " quarter" << endl;
    
    cout << "Dimes: ";
    if(dimes > 1) cout << dimes << " dime" << 's' << endl;
    else cout << dimes << " dime" << endl;
    
    cout << "Nickels: ";
    if(nickels > 1) cout << nickels << " nickel" << 's' << endl;
    else cout << nickels << " nickel" << endl;
    
    cout << "Pennies: ";
    if(pennies > 1) cout << pennies << " penny" << 's' << endl;
    else cout << pennies << " penny" << endl;

    return 0;
}