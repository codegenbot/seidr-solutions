#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int nickles = cents / 5;
    cents %= 5; 
    int pennies = cents;

    int dimes = nickles / 2;
    nickles %= 2;

    int quarters = dimes / 4;
    dimes %= 4;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}