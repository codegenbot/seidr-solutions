vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int rightmost = arr.back();
    
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            result.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    
    return result;
}