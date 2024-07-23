#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = min(cents / 10, quarters);
    quarters = 0; 
    cents %= 10;

    int nickles = min(cents / 5, dimes + (cents / 10) * 2);
    cents %= 5;

    int pennies = cents;
    cout << quarters << endl; 
    cout << nickles << endl;   
    cout << dimes << endl;      
    cout << pennies << endl;    

    return 0;
}