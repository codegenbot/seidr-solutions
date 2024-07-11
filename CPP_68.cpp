vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int minEvenIndex = 0, minEvenValue = *min_element(arr.begin(), arr.end(), [](int a, int b){return a % 2 && b % 2;});
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == minEvenValue) {
            result.push_back({minEvenValue, i});
            break;
        }
    }
    return result;
}