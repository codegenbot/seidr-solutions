int calculateFuelCost(vector<int> fuelPrices) {
    int totalCost = 0;
    for (int price : fuelPrices) {
        int cost = (price / 3);
        if (cost < 1) {
            cost = 0;
        } else {
            cost -= 2;
        }
        totalCost += cost;
    }
    return totalCost;
}