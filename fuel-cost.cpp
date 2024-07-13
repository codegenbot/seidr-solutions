int main() {
    vector<int> v;
    int n;
    while (cin >> n) {
        v.push_back(n);
    }
    
    int total = 0;
    for (int i = 0; i < v.size(); ++i) {
        total += (v[i] / 3) - 2;
    }
    
    cout << total << endl;
    
    return 0;
}