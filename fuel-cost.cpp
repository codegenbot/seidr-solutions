int main() {
    vector<int> v;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        v.push_back((num / 3) - 2);
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
    }
    
    cout << sum;
    
    return 0;
}