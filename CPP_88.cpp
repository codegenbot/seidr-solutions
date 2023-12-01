vector<int> sort_vector(vector<int> array) {
    if (array.size() <= 1) {
        return array;
    }
    
    if ((array.front() + array.back()) % 2 == 0) {
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}