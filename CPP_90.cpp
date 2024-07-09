int main() {
    vector<int> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        lst.push_back(num);
    }
    cout << "The next smallest number is: " << next_smallest(lst) << endl;
    return 0;
}