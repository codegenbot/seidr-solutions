int calculateFuelCost(vector<int> fuelPrices) {
    int total = 0;
    for (int price : fuelPrices) {
        int newPrice = (price / 3) - 2;
        total += newPrice;
    }
    return total;
}