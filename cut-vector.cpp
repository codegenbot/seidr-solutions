int main() {
    vector<int> v;

    int n;
    cin >> n;

    v.push_back(n);

    if (n % 2 == 0) {
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << endl;
        }
        cout << 0 << endl;
    } else {
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << endl;
        }
        cout << 0 << endl;
    }

    return 0;
}