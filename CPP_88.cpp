vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array; // Handle empty vector case

    vector<int> result = array;
    int first = array.front();
    int last = array.back();
    
    if ((first + last) % 2 == 0) {
        sort(result.begin(), result.end(), greater<int>());
    } else {
        sort(result.begin(), result.end());
    }
    
    return result;
}