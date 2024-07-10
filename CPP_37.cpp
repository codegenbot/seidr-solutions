bool issame(vector<float> a, vector<float> b);
vector<float> sort_even(vector<float> l);

int main() {
    int n;
    cin >> n;
    vector<float> v(n);
    for (float &x : v) cin >> x;

    bool check = true;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            check = false;
            break;
        }
    }

    if (check) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}