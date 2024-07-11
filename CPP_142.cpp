int sum_squares(vector<int> lst) {
    int result = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0)
            result += lst[i] * lst[i] * lst[i]; // cube
        else if ((i + 1) % 3 == 0)
            result += lst[i] * lst[i]; // square
    }
    return result;
}