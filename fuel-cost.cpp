int calculateFuelCost(vector<int> prices) {
    int totalCost = 0;
    for (int price : prices) {
        if (price >= 3) {
            totalCost += ((price / 3 - 2));
        }
    }
    return totalCost;
}