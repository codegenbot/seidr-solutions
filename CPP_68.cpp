vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int minEvenIndex = -1;
    int minValue = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minValue) {
            minValue = arr[i];
            minEvenIndex = i;
        }
    }
    
    if (minEvenIndex != -1) {
        result.push_back({minValue, minEvenIndex});
    } else {
        result.push_back({0, 0}); // default value
    }
    
    return result;
}