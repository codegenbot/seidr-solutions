int main() {
    int n; 
    vector<int> lst;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        lst.push_back(num);
    }
    cout << "Sum of digits of the maximum prime number in the list is: " << skjkasdkd(lst) << endl;
    return 0;
}