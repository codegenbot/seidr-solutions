int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; 
    int remainingCents = (cents % 25);

    cout << quarters << endl; 

    int dimes = remainingCents / 10;
    int remainingCentsAfterDimes = remainingCents % 10;

    if (remainingCentsAfterDimes >= 5) {
        int nickels = remainingCentsAfterDimes / 5;
        remainingCentsAfterDimes %= 5;
    } else {
        cout << "0" << endl; 
    }

    int pennies = remainingCentsAfterDimes;

    cout << dimes << endl; 
    cout << nickels << endl; 
    cout << pennies << endl; 

    return 0;
}