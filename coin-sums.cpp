#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickels, pennies
    
    int quarter = cents / 25;
    cents %= 25;
    
    int dime = cents / 10;
    cents %= 10;
    
    int nickel = cents / 5;
    cents %= 5;
    
    int penny = cents;
    
    cout << quarter << " quarters, ";
    if (quarter > 0) {
        cout << quarter << endl;
    } else {
        cout << endl;
    }
    
    cout << dime << " dimes, ";
    if (dime > 0) {
        cout << dime << endl;
    } else {
        cout << endl;
    }
    
    cout << nickel << " nickels, ";
    if (nickel > 0) {
        cout << nickel << endl;
    } else {
        cout << endl;
    }
    
    cout << penny << " pennies" << endl;

    return 0;
}