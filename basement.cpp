int main() {
    vector<int> vec;
    int n, sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
        sum += num;
        if (sum < 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}