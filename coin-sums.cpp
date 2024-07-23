int main() {
    int cents;
    cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    
    int nickles = cents / 5;
    cents %= 5;
    
    int dimes = cents / 10;
    cents %= 10;
    
    int pennies = cents % 1; // or simply cents, since pennies are always single units
    
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;
    
    return 0;
}