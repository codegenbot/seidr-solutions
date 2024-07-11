int fuel_cost(vector<int> costs) {
    int total = 0;
    for (int cost : costs) {
        total += max(0, cost / 3 - 2);
    }
    return total;
}