int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i] / 3 - 2;
    }
    return sum;
}