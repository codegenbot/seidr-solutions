vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    
    if (largest_negative != INT_MIN) {
        result[0] = largest_negative;
    }
    if (smallest_positive != INT_MAX) {
        result[1] = smallest_positive;
    }
    
    return result;
}