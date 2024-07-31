int solve() {
    vector<int> lst;
    cout << "Enter numbers (space-separated): ";
    string str;
    getline(cin, str);
    
    int num = 0;
    for (char c : str) {
        if (c == ' ') break; 
        num = num * 10 + (c - '0');
        if(num < INT_MAX) { 
            lst.push_back(num);
        } else {
            cout << "Number out of range, skipping." << endl;
        }
    }
    
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    
    cout << "Sum of odd numbers: " << sum << endl;
    return 0;
}