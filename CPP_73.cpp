int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int x : arr) {
        str += to_string(x);
    }
    
    int left = 0, right = n - 1;
    int count = 0;
    while (left < right) {
        if (str[left] != str[right]) {
            count++;
            right--;
        } else {
            left++;
            right--;
        }
    }
    return count;
}