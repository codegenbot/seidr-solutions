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
    
    cout << pennies << "\n" << nickels << "\n" << dimes << "\n" << quarters << endl;
    
    return 0;
}