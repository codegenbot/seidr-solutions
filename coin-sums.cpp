#include <iostream>
using namespace std;

int main() {
    int remainingCents = 0;
    cout << "Enter the number of cents: ";
    string input;
    getline(cin, input);
    int totalCents = stoi(input);

    // Calculate quarters
    int quarters = totalCents / 25;
    remainingCents %= 25;

    // Calculate dimes
    int dimes = remainingCents / 10;
    remainingCents %= 10;

    // Calculate nickles
    int nickles = remainingCents / 5;
    remainingCents %= 5;

    // Remaining amount is in pennies
    int pennies = remainingCents;

    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}