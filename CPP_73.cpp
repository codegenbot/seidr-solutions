int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    int res = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            res++;
            if (str[left] == str[right-1]) {
                right--;
            } else {
                left++;
            }
        } else {
            left++;
            right--;
        }
    }
    return res;
}