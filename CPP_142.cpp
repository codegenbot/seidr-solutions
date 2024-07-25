int sum_squares(vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0 && i % 4 != 0) {
            result += pow(lst[i], 2);
        } else if (i % 4 == 0 && i % 3 != 0) {
            result += pow(lst[i], 3);
        } else {
            result += lst[i];
        }
    }
    return result;
}