int main() {
    int cents;
    cin >> cents;

    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;

    if (cents >= 25) {
        quarters = cents / 25;
        cents %= 25;
    }
    if (cents >= 5) {
        nickels = cents / 5;
        cents %= 5;
    }
    pennies = cents;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}