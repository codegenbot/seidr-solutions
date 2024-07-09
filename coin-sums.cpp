#include <vector>
#include <iostream>

using namespace std;

vector<int> coinSums(int cents) {
    vector<int> coins(4);
    
    while (cents > 0) {
        if (cents >= 25) { // quarters
            cents -= 25;
            coins[0]++;
        } else if (cents >= 10) { // dimes
            cents -= 10;
            coins[1]++;
        } else if (cents >= 5) { // nickles
            cents -= 5;
            coins[2]++;
        } else {
            cents -= 1; // pennies
            coins[3]++;
        }
    }
    
    return coins;
}

int main() {
    int cents;
    cout << "Enter the number of cents: ";
    cin >> cents;
    vector<int> result = coinSums(cents);
    for (int i = 0; i < 4; ++i) {
        cout << result[i] << endl;
    }
    return 0;
}