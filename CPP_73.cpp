int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            break;
        }
        left++;
        right--;
    }
    for (int i = left; i <= right; i++) {
        if (str[i] != str[n - i - 1]) {
            changes++;
        }
    }
    return changes;
}