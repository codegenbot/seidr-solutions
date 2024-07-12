#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = cents / 1;
    int remainingCents = cents % 1;
    
    int nickles = remainingCents / 5;
    remainingCents %= 5;
    
    int dimes = remainingCents / 10;
    remainingCents %= 10;
    
    int quarters = remainingCents / 25;
    
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    
    return 0;
}