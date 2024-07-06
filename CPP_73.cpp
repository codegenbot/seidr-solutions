int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        arr.push_back(num);
    }
    int res = smallest_change(arr);
    cout << "The number of operations required to make all the elements in the array equal is: " << res << endl;
    return 0;
}