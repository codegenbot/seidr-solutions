int main() {
    int n;
    cin >> n;
    
    int quarters = n / 25;
    int dimes = (n % 25) / 10;
    int nickels = ((n % 25) % 10) / 5;
    int pennies = ((n % 25) % 10) % 5;
    
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;
    
    return 0;
}