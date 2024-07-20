int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    int dimes = 0;
    if (cents >= 10) {
        int temp = cents / 10;
        cents %= 10;
        dimes = temp;
    }

    int nickles = 0;
    if (cents >= 5) {
        nickles = cents / 5;
        cents %= 5;
    }

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}