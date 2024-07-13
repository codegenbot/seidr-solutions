int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; 
    int remainingCents = cents % 25;

    cout << quarters << endl; 

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    cout << dimes << endl; 

    int nickels = remainingCents / 5;
    remainingCents %= 5;

    while (remainingCents > 0) {
        int pennies = remainingCents;
        cout << pennies << endl; 
        remainingCents = 0;
    }

    return 0;
}