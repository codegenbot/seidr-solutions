bool issame(vector<float> a, vector<float> b);
vector<float> sort_even(vector<float> l);

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<float> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> v[i];
    }

    vector<float> result = sort_even(v);

    cout << "Sorted even elements: ";
    for (float x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}