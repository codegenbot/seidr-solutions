int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            int min_val = min(s[left], s[right]);
            max_val = max(s[left], s[right]);
            for (int i = left; i <= right; i++) {
                if (s[i] > min_val) {
                    changes++;
                    s[i] = min_val;
                }
                else if (s[i] < max_val) {
                    changes++;
                    s[i] = max_val;
                }
            }
            left++;
            right--;
        } else {
            left++;
            right--;
        }
    }
    return changes;
}