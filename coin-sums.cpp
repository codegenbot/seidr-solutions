#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickles, pennies
    
    int numQuarters = cents / 25;
    cents %= 25;
    
    int numDimes = cents / 10;
    cents %= 10;
    
    int numNickels = cents / 5;
    cents %= 5;
    
    int numPennies = cents;

    cout << numQuarters << endl;
    cout << numDimes << endl;
    cout << numNickels << endl;
    cout << numPennies << endl;

    return 0;
}