int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickles = cents / 5;
    int pennies = cents % 5;
    
    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}