int coins[] = {25, 10, 5, 1};
int count[4] = {0};

int main() {
    int cents;
    cin >> cents;
    
    for (int i = 0; i < 4; ++i) {
        count[i] = cents / coins[i];
        cents %= coins[i];
    }
    
    for (int i = 0; i < 4; ++i) {
        cout << count[i] << endl;
    }
    
    return 0;
}