int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remaining = cents % 25;

    int dimes = remaining / 10;
    int remaining_dimes = remaining % 10;

    int nickles = remaining_dimes / 5;
    int pennies = remaining_dimes % 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}