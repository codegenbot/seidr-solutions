int fuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int newPrice = (price / 3);
        if (newPrice < 1) {
            newPrice = 0;
        } else {
            newPrice -= 2;
        }
        total += newPrice;
    }
    return total;
}