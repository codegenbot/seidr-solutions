int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    string rev = s;
    reverse(rev.begin(), rev.end());
    int changes = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] != rev[i]) {
            changes++;
        }
    }
    return changes;
}