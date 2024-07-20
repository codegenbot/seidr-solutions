#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    cout << quarters << endl;  
    cout << dimes << endl;      
    cout << nickels << endl;    
    for (int i = 0; i < cents; ++i) {
        cout << "1";          
    }
    cout << endl;

    return 0;
}