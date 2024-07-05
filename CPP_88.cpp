vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    
    int sum = array.front() + array.back();
    vector<int> result = array;

    if (sum % 2 == 0) {
        sort(result.rbegin(), result.rend());
    } else {
        sort(result.begin(), result.end());
    }

    return result;
}