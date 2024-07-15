int main() {
    int cents;
    cin >> cents;

    int quarters = (cents / 25) + ((cents % 25) / 10) + (((cents % 25) % 10) / 5);
    cents %= 25;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents; // only pennies remain

    cout << quarters << endl;
    cout << nickles << endl;
    cout << (cents / 10) << endl;
    cout << pennies << endl;

    return 0;
}