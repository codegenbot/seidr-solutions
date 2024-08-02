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
            if (s[left] == s[right - 1]) {
                right--;
            } else if (s[right] == s[left + 1]) {
                left++;
            } else {
                changes++;
                break;
            }
        } else {
            left++;
            right--;
        }
    }
    return changes;
}