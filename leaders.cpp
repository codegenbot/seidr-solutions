vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxLeft = arr.back();
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= maxLeft) {
            result.push_back(arr[i]);
            maxLeft = arr[i];
        }
    }
    return result;
}