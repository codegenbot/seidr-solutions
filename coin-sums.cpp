int main() {
    int cents;
    cin >> cents;

    int pennies = cents;
    cout << quarters = pennies / 25; 
    quarters %= 4;
    pennies %= 25;
    
    cout << dimes = pennies / 10;
    dimes %= 10;
    pennies %= 10;

    cout << nickles = pennies / 5;
    nickles %= 20;
    pennies %= 5;

    cout << pennies << endl;

    return 0;
}