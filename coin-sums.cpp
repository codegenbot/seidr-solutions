#include <iostream>
using namespace std;
int main() {
    int cents, totalCoins = 0;
    cin >> cents;
    
    while (cents > 0) {
        if (cents >= 25) {
            totalCoins++;
            cents -= 25;
        } else if (cents >= 10) {
            totalCoins++;
            cents -= 10;
        } else if (cents >= 5) {
            totalCoins++;
            cents -= 5;
        } else {
            totalCoins++;
            cents--;
        }
    }
    
    cout << totalCoins << endl;
    
    return 0;
}