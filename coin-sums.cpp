int main() {
    int cents;
    cin >> cents;
    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickels = cents / 5;
    cents %= 5;

    cout << (quarters + dimes + nickels + cents) << "\n";
    cout << quarters << "\n";
    cout << dimes << "\n";
    cout << nickels << "\n";

    return 0;
}