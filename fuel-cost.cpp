int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int res = (i / 3);
        res = floor(res);
        sum += res - 2;
    }
    return sum;
}