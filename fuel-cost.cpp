int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = (price / 3) - 2;
        if (newPrice < 0) newPrice = 0; // ensure it's not negative
        sum += newPrice;
    }
    return sum;
}