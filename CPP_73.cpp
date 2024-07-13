int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i = 0; i < n; i++) {
        str += to_string(arr[i]);
    }
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    int changes = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != rev_str[i]) {
            changes++;
        }
    }
    return changes;
}