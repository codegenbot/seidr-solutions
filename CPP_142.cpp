int sum_squares(vector<int> lst) {
    int total = 0;
    for (size_t i = 0; i < lst.size(); ++i) {
        if ((i+1)%3 == 0 && (i+1)%4 != 0) { // If index is a multiple of 3 and not a multiple of 4
            total += lst[i]*lst[i];
        } else if ((i+1)%4 == 0 && (i+1)%3 != 0) { // If index is a multiple of 4 but not a multiple of 3
            total += lst[i]*lst[i]*lst[i];
        }
    }
    return total;
}