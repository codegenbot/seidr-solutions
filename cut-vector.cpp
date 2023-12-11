```
int main() {
    vector<int> v;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }
    int left = 0, right = n - 1;
    while (left < right) {
        if (v[left] == v[right]) {
            cout << left + 1 << " " << right + 1 << endl;
            return 0;
        }
        int diff = abs(v[left] - v[right]);
        if (diff > 1) {
            cout << "No solution" << endl;
            return 0;
        }
        left++;
        right--;
    }
}
```