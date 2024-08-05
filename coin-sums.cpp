#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int pennies = cents; 

    int total_cents = quarters * 25 + pennies; 
    int dimes = (total_cents - pennies) / 10;
    pennies = (total_cents - pennies) % 10;

    int nickles = pennies / 5;
    pennies %= 5;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}