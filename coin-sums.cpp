int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remainder = cents % 25;
    int dimes = remainder / 10;
    remainder %= 10;
    int nickels = remainder / 5;
    int pennies = remainder % 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}