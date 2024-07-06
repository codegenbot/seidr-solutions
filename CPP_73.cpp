int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i = 0; i < n; i++) {
        str += to_string(arr[i]);
    }
    
    int changes = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            left++; // move the left pointer one step forward
        } else {
            left++; // continue moving both pointers
        }
        right--;
    }
    
    return changes;
}