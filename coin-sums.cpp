#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    while (quarters * 25 <= cents) {
        cents -= 25;
        quarters++;
    }
    
    int dimes = cents / 10;
    while (dimes * 10 <= cents) {
        cents -= 10;
        dimes++;
    }

    int nickles = cents / 5;
    while (nickles * 5 <= cents) {
        cents -= 5;
        nickles++;
    }
    
    while (cents > 0) {
        cout << 0 << endl; 
    }
    cout << cents << endl;

    return 0;
}