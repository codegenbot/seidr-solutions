int calculateFuelCost(vector<int> fuelPrices) {
    int totalCost = 0;
    for (int price : fuelPrices) {
        int costPerUnit = floor((double)price / 3) - 2;
        totalCost += costPerUnit;
    }
    return totalCost;
}