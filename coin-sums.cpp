```c
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = cents / 5;
    cents %= 5;

    int dimes = cents / 10;
    cents %= 10;

    int quarters = cents / 25;
    cents %= 25;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    cout << cents << endl;
    
    return 0;
}