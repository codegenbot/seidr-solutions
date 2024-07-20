int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    cout << quarters << endl;

    int dimes = cents / 10;
    cents %= 10;

    cout << dimes << endl;

    int nickles = cents / 5;
    cents %= 5;

    cout << nickles << endl;

    int pennies = cents;

    cout << pennies << endl;

    return 0;
}