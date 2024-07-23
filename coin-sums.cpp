#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = (cents / 25);
    if (quarters * 25 <= cents) {
        cents -= quarters * 25;
    } else {
        quarters--;
        cents += 25;
    }
    
    int remaining_cents = cents;
    int dimes = remaining_cents / 10;
    remaining_cents %= 10;

    int pennies = remaining_cents;
    
    cout << quarters << endl;
    cout << remaining_cents / 5 << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    
    return 0;
}