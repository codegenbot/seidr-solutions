int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    int nickles = 0;
    while (cents >= 5) {
        if (cents >= 5) {
            cents -= 5;
            nickles++;
        }
    }

    int pennies = 0;
    int penniesRemaining = cents;

    while (penniesRemaining > 4) {
        penniesRemaining--;
        pennies++;
    }

    cout << quarters << endl;
    cout << nickles << endl;
    cout << 0 << endl; 
    cout << pennies << endl;

    return 0;
}