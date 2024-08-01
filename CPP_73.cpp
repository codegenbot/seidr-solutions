int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    
    int left = 0, right = str.length() - 1;
    int changes = 0;
    
    while (left < right) {
        if (str[left] != str[right]) {
            if (str[left] == str[right-1]) {
                str.replace(right, 1, str[left]);
                right--;
            } else if (str[right] == str[left+1]) {
                str.replace(left, 1, str[right]);
                left++;
            } else {
                changes++;
                break;
            }
        }
        left++, right--;
    }
    
    return changes;
}