```
int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;
    if (cents > 0) {quarters--;}

    int dimes = cents / 10;
    cents %= 10;
    if (cents > 0) {dimes--;}

    int nickles = cents / 5;
    cents %= 5;
    if (cents > 0) {nickles--;}

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}