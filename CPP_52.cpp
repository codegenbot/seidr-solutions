int main() {
    vector<int> l;
    int t;
    cin >> t;
    int n;
    while (cin >> n) {
        l.push_back(n);
    }
    bool result = below_threshold(l, t);
    cout << (result ? "True" : "False");
    return 0;
}