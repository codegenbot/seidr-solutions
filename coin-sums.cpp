#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int dimes = cents / 10;
    cents %= 10;
    
    int pennies = cents / 1; // use all remaining cents as pennies
    cents %= 1;
    
    cout << quarters << endl;
    cout << dimes << endl;
    cout << (cents/5) << endl; // calculate the number of nickles needed
    cout << pennies << endl;

    return 0;
}