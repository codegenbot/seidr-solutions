Here is the completed code:

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result; // return empty vector for empty input
    
    pair<int, int> smallest = {{arr[0], 0}};
    
    for(int i = 1; i < arr.size(); i++) {
        if((arr[i] % 2) == 0 && (smallest.first > arr[i]) || ((arr[i] % 2) != 0 && smallest.first > 0)) {
            smallest = {{arr[i], i}};
        }
    }
    
    result.push_back(smallest);
    
    return result;
}