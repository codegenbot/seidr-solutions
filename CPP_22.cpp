int main() {
    int n, arr[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (filter_integers(arr, n) == -1) {
        cout << "Error: The array must only contain integers." << endl;
    } else {
        assert(issame(arr, arr, n));
    }
    return 0;
}