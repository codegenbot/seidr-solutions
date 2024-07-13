int main() {
    int n;
    cin >> n;
    
    int quarters = n / 25;
    int dimes = (n % 25) / 10;
    int nickels = ((n % 25) % 10) / 5;
    int pennies = ((n % 25) % 10) % 5;
    
    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}