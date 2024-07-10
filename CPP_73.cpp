int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    
    int left = 0, right = n - 1;
    int changes = 0;
    
    while (left < right) {
        if (s[left] != s[right]) {
            changes++;
            break;
        }
        left++, right--;
    }
    
    for (int i = left; i <= right; i++) {
        if (s[i] != s[n-i-1]) {
            changes++;
        }
    }
    
    return changes;
}