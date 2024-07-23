int calculateFuelCost(vector<int>& fuelPrices) {
    int total = 0;
    for (int i : fuelPrices) {
        int price = i / 3 - 2; // Divide by 3, round down and subtract 2
        total += price; // Add to the total cost
    }
    return total;
}