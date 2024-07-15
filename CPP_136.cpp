vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largest_neg = 0, smallest_pos = 0;
    
    for (int num : lst) {
        if (num < 0 && num < largest_neg) {
            largest_neg = num;
        }
        if (num > 0 && (num < smallest_pos || smallest_pos == 0)) {
            smallest_pos = num;
        }
    }
    
    result[0] = largest_neg;
    result[1] = smallest_pos;
    
    return result;
}