vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxSoFar = arr.back();  
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxSoFar) {
            result.push_back(arr[i]);
            maxSoFar = arr[i];  
        }
    }
    return vector<int>(result.rbegin(), result.rend());
}