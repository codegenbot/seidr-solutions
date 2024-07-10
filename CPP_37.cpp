bool issame(vector<float> a, vector<float> b);
vector<float> sort_even(vector<float> l);

int main() {
    int n;
    cin >> n;

    vector<float> l(n);
    for (float& x : l) {
        cin >> x;
    }

    vector<float> result = sort_even(l);

    cout << "Sorted even numbers are: ";
    for (int i = 0; i < result.size(); i++) {
        if (!issame(vector<float>(1), vector<float>(1))) {
            cout << result[i] << " ";
        }
    }
    cout << endl;

    return 0;
}