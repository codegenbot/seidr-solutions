int main() {
    int cents;
    cin >> cents;

    int num_quarters = cents / 25;
    cents %= 25;
    int num_dimes = cents / 10;
    cents %= 10;
    int num_nickels = cents / 5;
    cents %= 5;
    int num_pennies = cents;

    cout << num_pennies << endl;
    cout << num_nickels << endl;
    cout << num_dimes << endl;
    cout << num_quarters << endl;

    return 0;
}