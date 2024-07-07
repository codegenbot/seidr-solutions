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
            bool found = false;
            for (int i = 0; i < n; ++i) {
                if (str[i] == str[right]) {
                    arr[i] = arr[left];
                    changes++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                arr[left] = arr[right];
                changes++;
            }
            left++;
        } else {
            left++;
            right--;
        }
    }
    
    return changes;
}