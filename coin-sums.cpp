#include <vector>
#include <iostream>

using namespace std;

vector<int> coinSums(int cents) {
    vector<int> coins = {0, 0, 0, 0};
    
    int quarters = cents / 25;
    cents %= 25;
    
    int dimes = cents / 10;
    cents %= 10;
    
    int nickels = cents / 5;
    cents %= 5;
    
    int pennies = cents;
    
    coins[3] = quarters;
    coins[2] = dimes;
    coins[1] = nickels;
    coins[0] = pennies;
    
    return coins;
}

int main() {
    int cents;
    cin >> cents;
    vector<int> result = coinSums(cents);
    for (int i = 0; i < 4; i++) {
        cout << result[i] << endl;
    }
    return 0;
}