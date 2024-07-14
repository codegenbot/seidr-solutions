vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] >= arr[i-1]) res.push_back(arr[i]);
    }
    return res;
}