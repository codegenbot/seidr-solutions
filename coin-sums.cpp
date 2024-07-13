int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; 
    int remainingCents = cents % 25;

    cout << quarters << endl; 

    if (remainingCents >= 10) {
        int dimes = remainingCents / 10;
        remainingCents %= 10;
        cout << dimes << endl; 
    } else {
        cout << 0 << endl; 
    }

    if (remainingCents >= 5) {
        int nickels = remainingCents / 5;
        remainingCents %= 5;
        cout << nickels << endl; 
    } else {
        cout << 0 << endl; 
    }

    while(remainingCents > 0) {
        if (remainingCents >= 5) {
            int nickels = remainingCents / 5;
            remainingCents %= 5;
            cout << nickels << endl; 
        } else {
            cout << remainingCents << endl; 
            break;
        }
    }

    return 0;
}