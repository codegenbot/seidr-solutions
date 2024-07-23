#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = min(cents / 10, quarters);
    quarters -= dimes;
    cents %= 10;

    int nickles = min(cents % 5, ((cents % 25) / 5) + ((cents % 100) / 50) * 2 - dimes * 4 - quarters * 8);
    cents %= 5;

    int pennies = cents;
    cout << quarters << endl; 
    cout << nickles << endl;   
    cout << dimes << endl;      
    cout << pennies << endl;    

    return 0;
}