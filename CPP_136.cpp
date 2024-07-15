vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int max_negative = INT_MIN;
    int min_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > max_negative) {
            max_negative = num;
        } else if (num > 0 && num < min_positive) {
            min_positive = num;
        }
    }
    
    if (max_negative != INT_MIN) {
        result[0] = max_negative;
    }
    if (min_positive != INT_MAX) {
        result[1] = min_positive;
    }
    
    return result;
}