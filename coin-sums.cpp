#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int quarters = n / 25;
    n %= 25;
    int dimes = n / 10;
    n %= 10;
    int nickels = n / 5;
    n %= 5;
    int pennies = n;
    
    cout << pennies << "\n" << nickels << "\n" << dimes << "\n" << quarters << "\n";
    
    return 0;
}