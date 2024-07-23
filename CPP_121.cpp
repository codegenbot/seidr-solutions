int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 4 == 1 || lst[i] % 4 == 3) {
            sum += lst[i];
        }
    }
    return sum;
}