vector<int> sort_array(vector<int> array) {
    vector<int> result = array;
    
    int sum = 0;
    for (int num : array) {
        sum += num;
    }
    
    if (sum % 2 == 0) {
        sort(array.begin(), array.end(), greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}