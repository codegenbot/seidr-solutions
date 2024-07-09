void main() {
    vector<int> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        lst.push_back(num);
    }
    
    bool result = is_sorted(lst);
    
    if (result)
        cout << "The list is sorted." << endl;
    else
        cout << "The list is not sorted." << endl;
}

bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    return true;
}