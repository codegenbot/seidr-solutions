int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = (price / 3);
        newPrice = min(newPrice, 0); // round down to nearest integer
        newPrice -= 2; // subtract 2
        total += newPrice;
    }
    return total;
}