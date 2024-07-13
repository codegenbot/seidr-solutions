```
int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    int remaining_nickels = nickels;
    while (remaining_nickels > 0) {
        --remaining_nickels;
        --pennies;
    }
    cout << nickels - remaining_nickels << " nickles" << endl;
    cout << pennies << " pennies" << endl;

    return 0;
}