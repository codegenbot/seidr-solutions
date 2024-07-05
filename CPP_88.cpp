vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    
    vector<int> sorted_array = array;
    int sum_first_last = array.front() + array.back();
    
    if (sum_first_last % 2 == 0) {
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    
    return sorted_array;
}