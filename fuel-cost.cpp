int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        double res = floor((double)i / 3);
        sum += res - 2;
    }
    return sum;
}