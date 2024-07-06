int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int left = 0;
    int right = n - 1;
    int count = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            count++;
        }
        left++;
        right--;
    }
    return count;
}