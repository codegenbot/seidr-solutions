int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        if (price < 3) {
            continue; // skip invalid input
        }
        int newPrice = (price / 3 - 2);
        total += newPrice;
    }
    return total;
}