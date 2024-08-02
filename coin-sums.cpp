```cpp
int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int remainingCents = cents; // Store the remaining cents
    int nickels = remainingCents / 5;
    remainingCents %= 5;

    int pennies = remainingCents;

    cout << quarters << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}