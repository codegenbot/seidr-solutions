int totalFuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        if (price < 1) {
            return -1; // error: all prices must be positive integers
        }
        int newPrice = (price / 3) - 2;
        sum += newPrice;
    }
    return sum;
}