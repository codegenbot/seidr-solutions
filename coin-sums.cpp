int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = min(cents / 10, quarters);
    cents %= 10;

    int nickles = min(cents / 5, (quarters+dimes) * 2/10 + (cents-dimes*10)/5);
    cents %= 5;

    int pennies = cents;
    cout << quarters << endl; 
    cout << nickles << endl;   
    cout << dimes << endl;      
    cout << pennies << endl;    

    return 0;
}