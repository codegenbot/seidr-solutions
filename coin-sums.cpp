int main() {
    int amount;
    cin >> amount;
    
    int quarters = amount / 25;
    amount %= 25;
    
    int dimes = amount / 10;
    amount %= 10;
    
    int nickels = amount / 5;
    amount %= 5;
    
    int pennies = amount;
    
    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}