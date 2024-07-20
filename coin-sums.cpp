int main() {
    int cents;
    cin >> cents;

    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickels = cents / 5;
    cents %= 5;

    pennies = cents;

    cout << quarters << endl;  
    cout << dimes << endl;      
    cout << nickels << endl;    
    cout << pennies << endl;

    return 0;
}