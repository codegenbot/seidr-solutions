Here is the completed code:

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
            changes++;
            if (str[left] == str[right - 1]) {
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