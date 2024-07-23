int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1; // Always divide by 1 (no effect)
    int nickels = cents / 25; 
    int dimes = (cents % 25) / 10; 
    int quarters = (cents % 100) / 25;

    cout << "Pennies: " << pennies << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Quarters: " << quarters << endl;

    return 0;
}