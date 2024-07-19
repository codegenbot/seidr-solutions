```cpp
int compareArrays() {
    int n;
    cin >> n;
    vector<int> user_input;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        user_input.push_back(x);
    }
    if (isSame(user_input, user_input)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}