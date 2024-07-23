#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = (cents / 25);
    if (quarters * 25 <= cents) {
        cents -= quarters * 25;
        int dimes = cents / 10;
        cents %= 10;
        
        int nickles = (cents / 5);
        cents %= 5;
        
        int pennies = cents % 5; // or simply cents % 1, since pennies are always single units
        
        cout << quarters << endl;
        cout << nickles << endl;
        cout << dimes << endl;
        cout << pennies << endl;
    } else {
        --quarters;
        cents += 25;
        
        if (quarters * 25 <= cents) {
            int dimes = (cents / 10);
            cents %= 10;
            
            int nickles = (cents / 5);
            cents %= 5;
            
            int pennies = cents % 5; // or simply cents % 1, since pennies are always single units
            
            cout << quarters + 1 << endl;
            cout << nickles << endl;
            cout << dimes << endl;
            cout << pennies << endl;
        } else {
            --quarters;
            ++dimes;
            
            int nickles = (cents / 5);
            cents %= 5;
            
            int pennies = cents % 5; // or simply cents % 1, since pennies are always single units
            
            cout << quarters + 1 << endl;
            cout << nickles << endl;
            cout << dimes - 1 << endl;
            cout << pennies << endl;
        }
    }
    
    return 0;
}