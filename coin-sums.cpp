#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int nickles = (cents + 4) / 5; 
    int quarters = cents / 25;
    cents %= 25;

    int dimes = min(cents, 10);
    cents -= dimes * 10;

    int pennies = cents;

    cout << quarters << endl; 
    cout << nickles - (quarters + dimes) << endl;   
    cout << dimes << endl;      
    cout << pennies << endl;    

    return 0;
}