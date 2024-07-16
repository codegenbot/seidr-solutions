int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    
    int result = 0;
    for (int i = 0; i < v.size(); ++i) {
        result += (v[i] / 3) - 2;
    }
    
    cout << result;
    
    return 0;
}