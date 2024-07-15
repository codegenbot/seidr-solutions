#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int dimes = cents / 10;
    cents %= 10;
    
    int nickles = cents / 5;
    cents %= 5;
    
    int pennies = cents;
    
    cout << std::to_string(quarters) << endl;
    cout << std::to_string(nickles) << endl;
    cout << std::to_string(dimes) << endl;
    cout << std::to_string(pennies) << endl;

    return 0;
}