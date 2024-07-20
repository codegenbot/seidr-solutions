#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    // Calculate largest denomination coins first
    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10; 
    cents %= 10;

    int nickels = cents / 5; 
    cents %= 5;

    int pennies = cents;

    cout << quarters << " quarter(s), " << dimes << " dime(s), " << nickels << " nickel(s), and " << pennies << " penny(ies)." << endl;
    return 0;
}