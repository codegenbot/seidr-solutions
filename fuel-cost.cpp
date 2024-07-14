int calculateFuelCost(vector<int> costs) {
    int sum = 0;
    for (int cost : costs) {
        int new_cost = (cost / 3) - 2;
        sum += new_cost;
    }
    return sum;
}