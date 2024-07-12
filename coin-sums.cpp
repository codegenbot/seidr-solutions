int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents -= quarters * 25;
    
    int dimes = cents / 10;
    cents -= dimes * 10;
    
    int nickels = cents / 5;
    cents -= nickels * 5;
    
    int pennies = cents;
    
    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}