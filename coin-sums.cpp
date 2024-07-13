#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    while(cents >= 10) {
        dimes++;
        cents -= 10;
    }

    int nickles = 0;
    while(cents >= 5) {
        nickles++;
        cents -= 5;
    }

    int pennies = cents;

    cout << "Quarters: " << quarters << endl; 
    cout << "Dimes: " << dimes << endl;   
    cout << "Nickels: " << nickles << endl;      
    cout << "Pennies: " << pennies << endl;     

    return 0;
}