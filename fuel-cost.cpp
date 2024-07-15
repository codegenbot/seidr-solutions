int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    
    int sum = 0;
    for (int num : v) {
        sum += (num / 3) - 2;
    }
    
    cout << sum;
    
    return 0;
}