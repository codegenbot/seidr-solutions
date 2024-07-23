int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for(int i = 0; i < n; i++) 
        cin >> digits[i];
    
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 1) {
            int temp = digits[i] * 2;
            sum += temp > 9 ? temp - 9 : temp;
        } else {
            sum += digits[i];
        }
    }
    
    cout << sum;
    return 0;
}