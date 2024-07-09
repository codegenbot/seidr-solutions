vector<int> pluck(vector<int> arr) {
    if(arr.empty()) return {};
    vector<int> result = {};
    int minEvenValueIndex = -1;
    int minValue = INT_MAX;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minValue) {
            minValue = arr[i];
            minEvenValueIndex = i;
        }
    }
    if(minValue != INT_MAX) {
        result.push_back(minValue);
        result.push_back(minEvenValueIndex);
    }
    return result;
}