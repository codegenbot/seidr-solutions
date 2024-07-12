int fuelCost(const vector<int>& costs) {
    int sum = 0;
    for (int cost : costs) {
        sum += max(cost / 3 - 2, 0);
    }
    return sum;
}