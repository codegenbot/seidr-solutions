int fuelCost(vector<int> prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = (price / 3);
        newPrice = std::floor(newPrice) - 2;
        sum += newPrice;
    }
    return sum;
}