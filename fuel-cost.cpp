int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int cost = (price / 3) - 2;
        total += cost;
    }
    return total;
}