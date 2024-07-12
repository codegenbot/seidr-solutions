int main() {
    int N;
    cin >> N;
    int quarters = N / 25;
    N %= 25;
    int dimes = N / 10;
    N %= 10;
    int nickles = N / 5;
    int pennies = N % 5;
    
    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    
    return 0;
}