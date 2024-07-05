int main() {
    int cents;
    cin >> cents;

    if (cents < 0) {
        cout << "Error: Please enter a non-negative integer.\n";
        return -1;
    }

    int quarters = static_cast<int>(cents / 25.0);
    cents %= 25;

    int dimes = static_cast<int>(cents / 10.0);
    cents %= 10;

    int nickles = static_cast<int>(cents / 5.0);
    cents %= 5;

    int pennies = cents;

    cout << quarters << "\n";
    cout << dimes << "\n";
    cout << nickles << "\n";
    cout << pennies << "\n";

    return 0;
}