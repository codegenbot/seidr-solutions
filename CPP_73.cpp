int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i = 0; i < n; i++) {
        s += to_string(arr[i]);
    }
    int changes = 0;
    bool flag = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            flag = false;
            break;
        }
    }
    if (!flag) {
        for (int i = 0; i < n; i++) {
            if (s[i] != s[n - i - 1]) {
                changes++;
            }
        }
    } else {
        changes = 0;
    }
    return changes;
}