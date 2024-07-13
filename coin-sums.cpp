int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; 
    int remainingCents = cents % 25;

    cout << quarters << endl; 

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    cout << dimes << endl; 

    int nickles = remainingCents / 5;
    int restP = remainingCents % 5;
    remainingCents %= 5;

    cout << nickles << endl; 
    cout << restP << endl; 

    cout << remainingCents << endl; 

    return 0;
}