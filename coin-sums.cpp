int main() {
    int cents;
    cin >> cents;

    int total_pennies = cents / 100;
    int pennies = total_pennies;

    int remaining_cents = (cents % 100);
    
    int nickles = remaining_cents / 25;
    remaining_cents %= 25;

    int dimes = remaining_cents / 10;
    remaining_cents %= 10;

    int quarters = remaining_cents / 5;

    cout << pennies << endl; 
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}