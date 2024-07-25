int sum_squares(vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) { // square if index is multiple of 3 and not multiple of 4
            total += lst[i] * lst[i];
        } else if (i % 4 == 0 && i % 3 != 0) { // cube if index is multiple of 4 and not multiple of 3
            total += pow(lst[i], 3);
        } else {
            total += lst[i]; // do nothing for other indices
        }
    }
    return total;
}