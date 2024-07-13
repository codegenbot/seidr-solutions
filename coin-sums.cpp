#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    while (quarters > 0 && cents < 25) quarters--;

    cents %= 25;

    cout << quarters << endl; 
    int remainder = cents;
    int dimes = remainder / 10;
    remainder %= 10;

    cout << dimes << endl;   

    int nickles = remainder / 5;
    remainder %= 5;

    cout << nickles << endl;      

    int pennies = remainder;

    cout << pennies << endl;     

    return 0;
}