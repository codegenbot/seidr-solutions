#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int nickles = min(cents / 5, quarters - cents/25/2);
    cents %= 5;

    int dimes = cents / 10; 
    cents %= 10;

    int pennies = min(cents, 9);
    cents -= pennies;

    cout << quarters << endl; 
    cout << nickles << endl;   
    cout << dimes << endl;      
    cout << pennies << endl;    

    return 0;
}