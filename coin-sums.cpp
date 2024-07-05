int main() {
    int cents;
    cin >> cents;

    if(cents < 0) {
        cout << "Error: Please enter a non-negative integer.\n";
        return -1;
    }

    int quarters = cents / 25;
    int remainingCents = cents % 25;

    int dimes = remainingCents / 10;
    int remainingDimeCents = remainingCents % 10;

    int nickles = remainingDimeCents / 5;
    int remainingNickleCents = remainingDimeCents % 5;

    int pennies = remainingNickleCents;

    cout << "Quarters: " << quarters << " coins\n";
    cout << "Dimes: " << dimes << " coins\n";
    cout << "Nickles: " << nickles << " coins\n";
    cout << "Pennies: " << pennies << " coins\n";

    return 0;
}