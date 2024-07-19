int calculateFuelCost(vector<int> &costs) {
    int totalCost = 0;
    for (int cost : costs) {
        int newCost = (cost / 3);
        if (newCost < 1) continue;
        newCost -= 2;
        totalCost += newCost;
    }
    return totalCost;
}