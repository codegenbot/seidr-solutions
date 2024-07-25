int sum_squares(vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) { // index is a multiple of 3 and not a multiple of 4
            total += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) { // index is a multiple of 4 and not a multiple of 3
            total += pow(lst[i], 3);
        } else {
            total += lst[i]; // index is neither a multiple of 3 nor 4, just add the value as it is
        }
    }
    return total;
}