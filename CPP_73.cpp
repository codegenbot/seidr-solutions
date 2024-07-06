```
int smallest_change(int arr[], int n) {
    string s = "";
    for (int i = 0; i < n; i++) {
        s += to_string(arr[i]);
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