Here is the solution:

int smallest_change(vector<int> arr) {
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int left = 0, right = str.length() - 1;
    int changes = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            if (left == 0 || str[left] != str[right-1]) {
                right--;
            } else {
                left++;
            }
        } else {
            left++;
            right--;
        }
    }
    return changes;
}