int main() {
    int cents;
    cin >> cents;
    
    int coins[4] = {25, 10, 5, 1};
    int ans[4] = {0};
    
    for (int i = 0; i < 4; i++) {
        ans[i] = cents / coins[i];
        cents %= coins[i];
    }
    
    for (int i = 0; i < 4; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}