int calculateFuelCost(vector<int> &numbers) {
    int totalFuelCost = 0;
    for (int number : numbers) {
        int fuelCost = (number / 3) - 2;
        if (fuelCost > 0) {
            totalFuelCost += fuelCost;
        }
    }
    return totalFuelCost;
}