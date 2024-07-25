int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int res = (i / 3);
        res = floor(res);
        res -= 2;
        sum += res;
    }
    return sum;
}