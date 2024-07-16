int main() {
    int cents;
    cin >> cents;
    int total_quarters = cents / 25;
    cents %= 25;

    int total_dimes = cents / 10;
    cents %= 10;

    int nickles_and_pennies = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << total_quarters << endl;
    cout << total_dimes << endl;
    cout << nickles_and_pennies << endl;
    cout << pennies << endl;
}