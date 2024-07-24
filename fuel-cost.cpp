int calculateFuelCost(vector<int> costs) {
    int totalCost = 0;
    for (int cost : costs) {
        int newCost = static_cast<int>(cost / 3.0);
        newCost -= 2;
        totalCost += newCost;
    }
    return totalCost;
}