```cpp
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int leader = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] < leader) {
            result.push_back(leader);
            leader = arr[i];
        }
    }
    result.push_back(arr[0]);
    reverse(result.begin(), result.end());
    return result;
}