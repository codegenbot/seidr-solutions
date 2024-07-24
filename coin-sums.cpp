int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25;

    int dimes = remainingCents / 10;
    int pennies = remainingCents % 10;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << 0 << endl; // always 0 nickles
    cout << pennies << endl;

    return 0;
}