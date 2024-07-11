int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int l = 0, r = s.length() - 1;
    int changes = 0;
    while (l < r) {
        if (s[l] != s[r]) {
            changes++;
            break;
        }
        l++;
        r--;
    }
    for (int i = l; i <= r; i++) {
        if (s[i] != s[2*r - i]) {
            changes++;
        }
    }
    return changes;
}