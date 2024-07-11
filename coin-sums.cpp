int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;

    cout << pennies << endl << nickels << endl << dimes << endl << quarters << endl;

    return 0;
}