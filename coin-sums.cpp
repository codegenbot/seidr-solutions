#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;
    
    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles, pennies in cents
    
    int quarterCount = cents / 25;
    cents %= 25;
    
    int dimeCount = cents / 10;
    cents %= 10;
    
    int nickelCount = cents / 5;
    cents %= 5;
    
    int pennyCount = cents;
    
    cout << pennyCount << endl;
    cout << quarterCount << endl;
    cout << dimeCount << endl;
    cout << nickelCount << endl;

    return 0;
}