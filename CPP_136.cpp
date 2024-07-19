bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive)) {
            smallest_positive = num;
        }
    }
    
    if (largest_negative == INT_MIN) {
        largest_negative = 0;
    }
    if (smallest_positive == INT_MAX) {
        smallest_positive = 0;
    }
    
    return {largest_negative, smallest_positive};
}