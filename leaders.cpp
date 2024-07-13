```
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxSoFar = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            result.push_back(arr[i]);
        }
    }
    return result;
}