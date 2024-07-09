bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }

    vector<string> result = by_length(arr);

    vector<string> temp = by_length(arr);

    sort(temp.begin(), temp.end());

    bool same = issame(result, temp);

    if (same)
        cout << "The numbers have the same number of distinct digits." << endl;
    else
        cout << "The numbers do not have the same number of distinct digits." << endl;

    return 0;
}