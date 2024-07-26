int fuel_cost(vector<int> &values) {
    int sum = 0;
    for (int val : values) {
        sum += max(0, val / 3 - 2);
    }
    return sum;
}