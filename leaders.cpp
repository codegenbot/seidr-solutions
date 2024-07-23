```cpp
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    return result;
}