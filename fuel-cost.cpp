int calculateFuelCost(vector<int> fuelCosts) {
    int totalFuelCost = 0;
    for (int cost : fuelCosts) {
        int newCost = (cost / 3) - 2;
        if (newCost > 0)
            totalFuelCost += newCost;
    }
    return totalFuelCost;
}