int sum_squares(vector<int> lst) {
    int total = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0) {
            total += lst[i] * lst[i] * lst[i];
        } else if ((i + 1) % 3 == 0) {
            total += lst[i] * lst[i];
        }
    }
    return total;
}