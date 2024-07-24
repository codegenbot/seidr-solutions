int getFuelCost(vector<int> costs) {
    int sum = 0;
    for (int cost : costs) {
        int new_cost = (cost / 3 - 2);
        if (new_cost < 0) continue;
        sum += new_cost;
    }
    return sum;
}