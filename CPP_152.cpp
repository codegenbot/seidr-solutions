int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 1000) {
        cout << "Error: Input number should be between 1 and 1000." << endl;
        return 1;
    }
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    if (!issame(a, b)) {
        cout << "Error: The two arrays are not the same." << endl;
        return 1;
    }
    vector<int> result = compare(a, b);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> a, vector<int> b) {
    vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            result.push_back(a[i]);
        } else if (a[i] < b[i]) {
            result.push_back(b[i]);
        }
    }
    return result;
}