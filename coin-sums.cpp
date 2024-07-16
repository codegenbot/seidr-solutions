```cpp
int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int remainingCents = cents; // store the remaining cents for further processing

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    int nickles = remainingCents / 5;
    remainingCents %= 5;

    int pennies = remainingCents;

    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}