int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents = cents % 25;
    int dimes = cents / 10;
    cents = cents % 10;
    int nickels = cents / 5;
    cents = cents % 5;
    int pennies = cents;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}