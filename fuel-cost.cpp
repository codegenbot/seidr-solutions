int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        double y = floor((double)x / 3) - 2;
        sum += y >= 0 ? static_cast<int>(y) : 0;
    }
    return sum;
}