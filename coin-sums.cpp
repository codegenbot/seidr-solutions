int main() {
    int cents;
    cin >> cents;

    int total_quarters = cents / 25;
    cents %= 25;

    int total_dimes = cents / 10;
    cents %= 10;

    int total_nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << total_quarters << endl; 
    cout << total_dimes << endl;
    cout << total_nickles << endl;
    cout << pennies << endl;
}