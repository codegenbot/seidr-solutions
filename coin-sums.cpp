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
    
    int pennies = min(cents, 4);
    cout << pennies << endl;
    cents -= pennies * 1; 
    
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}