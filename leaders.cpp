```cpp
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int max_right = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return result;
}