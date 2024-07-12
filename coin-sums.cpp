int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << pennies << endl;
    cout << 0 << endl;

    return 0;
}