int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int count = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (arr[i] == s[right]) {
                    arr[i] = s[left];
                    found = true;
                    break;
                }
            }
            if (!found) {
                count++;
            } else {
                left++;
                right--;
            }
        } else {
            left++;
            right--;
        }
    }
    return count;
}