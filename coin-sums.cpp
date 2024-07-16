```cpp
int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int remainingCents = cents; // Store remaining cents for next iterations
    int dimes = remainingCents / 10;
    remainingCents %= 10;

    int nickles = remainingCents / 5;
    remainingCents %= 5;

    int pennies = remainingCents;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}