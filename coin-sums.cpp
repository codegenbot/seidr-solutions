int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25, dimes = 0, nickles = 0, pennies = 0;

    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }

    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }

    pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}