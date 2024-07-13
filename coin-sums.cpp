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

    int pennies = cents;

    cout << (quarters > 0 ? quarters : 0) << endl; 
    cout << (dimes > 0 ? dimes : 0) << endl;   
    cout << (nickles > 0 ? nickles : 0) << endl;      
    cout << (pennies > 0 ? pennies : 0) << endl;     

    return 0;
}