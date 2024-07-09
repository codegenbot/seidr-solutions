int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int dimes = (cents / 10);
    if(cents < 10) dimes = 0;
    else cents %= 10;
    
    int nickles = (cents / 5);
    if(cents < 5) nickles = 0;
    else cents %= 5;
    
    int pennies = cents;
    
    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}