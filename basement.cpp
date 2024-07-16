int basement(vector<int> A) {
    int sum = 0;
    for (int i = 0; i < A.size(); ++i) {
        sum += A[i];
        if (sum < 0) {
            return i;
        }
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    cout << basement(A) << endl;
    return 0;
}