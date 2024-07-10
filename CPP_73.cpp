int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int left = 0, right = s.length() - 1;
    int count = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            count++;
            right--;
        } else {
            left++;
            right--;
        }
    }
    return count;
}