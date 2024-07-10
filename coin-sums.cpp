#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    double quarters = (double)cents / 25; 
    cents %= 25;

    double dimes = (double)cents / 10;
    cents %= 10;

    double nickles = (double)cents / 5;
    cents %= 5;

    int pennies = (int)cents; 

    cout << floor(quarters) << " quarter" << (floor(quarters) > 1 ? "s" : "") << endl;
    if (dimes > 0) {
        cout << floor(dimes) << " dime" << (floor(dimes) > 1 ? "s" : "") << endl;
    }
    if (nickles > 0) {
        cout << floor(nickles) << " nickel" << (floor(nickles) > 1 ? "s" : "") << endl;
    }
    if (pennies > 0) {
        cout << pennies << " penny" << (pennies > 1 ? "s" : "") << endl;
    }

    return 0;
}