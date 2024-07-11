int totalFuelCost(vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = (cost / 3 - 2);
        sum += newCost;
    }
    return sum;
}