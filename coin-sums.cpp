#include <vector>
#include <iostream>

using namespace std;

int pennies = 100; // value of a penny in cents
int nickles = 25;   // value of a nickel in cents
int dimes = 10;     // value of a dime in cents
int quarters = 25;  // value of a quarter in cents

void makeChange(int amount) {
    int quartersNeeded = amount / quarters;
    amount %= quarters;

    int dimesNeeded = amount / dimes;
    amount %= dimes;

    int nicklesNeeded = amount / nickles;
    amount %= nickles;

    int penniesNeeded = amount / pennies;

    cout << penniesNeeded << endl;
    cout << quartersNeeded - dimesNeeded - 2*nicklesNeeded << endl;
    cout << dimesNeeded - nicklesNeeded << endl;
    cout << nicklesNeeded << endl;
}

int main() {
    int amount;
    cin >> amount;
    makeChange(amount);
    return 0;
}