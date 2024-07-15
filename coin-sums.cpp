#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int totalCoins = 0; 
    int quarters = cents / 25;
    totalCoins += quarters;
    cents %= 25;

    int dimes = cents / 10;
    totalCoins += dimes;
    cents %= 10;

    int nickles = cents / 5;
    totalCoins += nickles;
    cents %= 5;

    int pennies = cents;
    totalCoins += pennies;

    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickles << " nickels" << endl;
    cout << pennies << " pennies" << endl;
    
    cout << "Total Coins: " << totalCoins << endl;

    return 0;
}