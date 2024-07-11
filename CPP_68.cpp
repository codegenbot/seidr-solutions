Here is the completed code:

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result = {};
    if (arr.size() == 0) return result;
    
    int min_even_value = INT_MAX;
    int min_index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < min_even_value) {
            min_even_value = arr[i];
            min_index = i;
        }
    }
    
    result.push_back({min_even_value, min_index});
    
    return result;