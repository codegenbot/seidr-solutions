#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int pennies = cents / 1, nickles = (cents % 100) / 5, dimes = (cents % 25) / 10, quarters = cents / 25;
    
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;
    
    return 0;
}