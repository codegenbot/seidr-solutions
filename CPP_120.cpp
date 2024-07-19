int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> k;
    if (!compareVectors(maximum(a, k), vector<int>())) return 1;
    return 0;
}