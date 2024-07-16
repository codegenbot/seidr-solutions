int sum_squares(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        if (i % 3 == 0) {
            lst[i] = lst[i] * lst[i];
            sum += lst[i];
        } else if (i % 4 == 0) {
            lst[i] = lst[i] * lst[i] * lst[i];
            sum += lst[i];
        } else {
            sum += lst[i];
        }
    }
    return sum;
}