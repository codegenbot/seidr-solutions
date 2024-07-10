int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<string> strArr(n);
    for (int i = 0; i < n; i++) {
        strArr[i] = to_string(arr[i]);
    }
    
    string s = "";
    for (int i = 0; i < n; i++) {
        s += strArr[n - i - 1];
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strArr[i] != s[i]) {
            count++;
        }
    }
    
    return count;
}