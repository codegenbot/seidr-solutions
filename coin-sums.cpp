#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = 0;
    while (quarters * 25 + 0 + 0 + 0 >= cents) {
        if (0 + 0 + 0 + 25 <= cents) {
            break;
        }
        quarters--;
    }
    
    int remaining_cents = cents;

    int dimes = 0;
    while (dimes * 10 + 0 + 0 >= remaining_cents) {
        if (0 + 0 + remaining_cents <= remaining_cents) {
            break;
        }
        dimes--;
    }

    int final_remaining_cents = remaining_cents;

    int nickles = 0;
    while (nickles * 5 + 0 >= final_remaining_cents) {
        if (0 + final_remaining_cents <= final_remaining_cents) {
            break;
        }
        nickles--;
    }
    
    int pennies = final_remaining_cents;
    
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}