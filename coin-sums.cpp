int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10 * dimes;

    int nickles = cents / 5;
    cents %= 5 * nickles;

    cout << (quarters > 0 ? quarters : 0) << endl;   
    cout << (dimes > 0 ? dimes : 0) << endl;  
    cout << (nickles > 0 ? nickles : 0) << endl;      
    cout << (cents > 0 ? cents : 0) << endl;     

    return 0;
}