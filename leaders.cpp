```cpp
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    return result;
}