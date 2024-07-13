```cpp
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if ((i == n - 1 || arr[i] >= arr[i + 1])) {
            result.push_back(arr[i]);
        }
    }
    return result;
}