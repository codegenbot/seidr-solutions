int luhn(int n) {
    int sum = 0;
    bool alternate = false;
    while(n > 0) {
        int digit = n % 10;
        if(alternate) {
            digit *= 2;
            if(digit > 9) 
                digit -= 9;
        }
        sum += digit;
        n /= 10;
        alternate = !alternate;
    }
    return sum;
}
int main() {
    int n, i;
    cin >> n;
    vector<int> a(n);
    for(i=0; i<n; ++i) {
        cin >> a[i];
    }
    cout << luhn(a[0]);
    for(i = 1; i < n; ++i) {
        cout << " " << a[i];
    }
    return 0;
}