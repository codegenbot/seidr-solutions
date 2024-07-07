int main() {
    int n;
    cin >> n;
    vector<float> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool same = issame(a, a);
    if (same) {
        cout << "The array is the same." << endl;
    } else {
        cout << "The array is not the same." << endl;
    }
}

bool issame(vector<float> a, vector<float> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}