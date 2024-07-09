int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int left = 0;
    int right = n - 1;
    int changes = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            if (str[left] == str[right-1])
                right--;
            else if (str[right] == str[left+1])
                left++;
            else {
                left++;
                right--;
                changes++;
            }
        } else {
            left++;
            right--;
        }
    }
    return changes;
}