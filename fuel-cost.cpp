int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    
    int sum = 0;
    for (int num : v) {
        sum += max(num / 3 - 2, 0);
    }
    
    cout << sum;
    
    return 0;
}