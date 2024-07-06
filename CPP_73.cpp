int smallest_change(int arr[], int n) {
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int left = 0, right = s.length() - 1;
    int changes = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            changes++;
            left++;
            right--;
        } else {
            left++;
            right--;
        }
    }
    return changes;
}