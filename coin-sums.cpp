#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int nickles = min(cents / 5, quarters + nickles);
    cents %= 5;

    int dimes = (cents + 4) / 10; 
    cents %= 10;

    if(dimes > quarters)
        dimes--;

    int pennies = cents;

    cout << quarters << endl; 
    cout << nickles << endl;   
    cout << dimes << endl;      
    cout << pennies << endl;    

    return 0;
}