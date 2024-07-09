int main() {
    vector<int> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        lst.push_back(val);
    }
    int result = next_smallest(lst);
    if (result == -1) 
        cout << "No smaller number is found in the list." << endl;
    else
        cout << "The smallest number greater than all previous numbers is: " << result << endl;
    return 0;
}