#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int nickles = (cents % 25) / 5; 
    int dimes = (cents % 30) / 10; 

    int pennies = cents % 10;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}