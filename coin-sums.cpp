#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int dimes = cents / 25; 
    cents %= 25;

    int quarters = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << dimes << endl;
    cout << quarters << endl;
    cout << nickles << endl;
    cout << pennies << endl;
    
    return 0;
}