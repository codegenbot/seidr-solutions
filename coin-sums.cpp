int main() {
    int n;
    cin >> n;
    int quarters = n / 25, dimes = (n % 25) / 10, nickels = ((n % 25) % 10) / 5, pennies = ((n % 25) % 10) % 5;
    
    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}