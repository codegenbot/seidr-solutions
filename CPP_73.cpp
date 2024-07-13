int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int left = 0, right = str.size() - 1;
    int changes = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            if (left == 0)
                right--;
            else if (right == str.size() - 1)
                left++;
            else {
                left++;
                right--;
            }
        } else
            left++, right--;
    }
    return changes;
}