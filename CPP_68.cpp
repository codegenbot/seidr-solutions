Here is the completed code:

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result = {};
    if (arr.empty()) return result;
    
    int min_even_value = INT_MAX;
    int index_of_min_even = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < min_even_value) {
            min_even_value = arr[i];
            index_of_min_even = i;
        }
    }
    
    result.push_back({min_even_value, index_of_min_even});
    
    return result;