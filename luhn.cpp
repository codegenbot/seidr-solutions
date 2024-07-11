int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        if ((n - i) % 2 == 0) {
            int doubled = vec[i] * 2;
            sum += (doubled >= 10) ? doubled - 9 : doubled;
        } else {
            sum += vec[i];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}