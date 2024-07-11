int main() {
    int cents;
    cin >> cents;

    int max_quarters = min(cents / 25, (cents + 24) / 25);
    int quarters = max_quarters;
    cents %= 25;

    max_quarters = (cents >= 25 ? max_quarters : (cents - (max_quarters * 25)) / 10);
    int dimes = min(cents / 10, max_quarters);
    cents %= 10;

    int nickles = min(cents / 5, dimes);
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}