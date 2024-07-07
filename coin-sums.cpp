int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25.0;
    cents %= 25;

    int dimes = cents / 10.0;
    cents %= 10;

    int nickles = cents / 5.0;
    cents %= 5;

    int pennies = cents;

    cout << fixed << setprecision(0) << quarters << endl;
    cout << fixed << setprecision(0) << dimes << endl;
    cout << fixed << setprecision(0) << nickles << endl;
    cout << fixed << setprecision(0) << pennies << endl;

    return 0;
}