int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int left = 0, right = s.length() - 1;
    int changes = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            changes++;
            if (left == right) {
                break;
            }
            if (s[left + 1] == s[right]) {
                left++;
            } else if (s[left] == s[right - 1]) {
                right--;
            } else {
                left++, right--;
            }
        } else {
            left++, right--;
        }
    }
    return changes;
}