int main() {
    int cents;
    cin >> cents;

    // Calculate the number of each type of coin
    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickels = cents / 5;
    cents %= 5;
    int pennies = cents;

    // Output the number of each type of coin
    cout << pennies << "\n" << nickels << "\n" << dimes << "\n" << quarters;

    return 0;
}