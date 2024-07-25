int calculateFuelCost(vector<int> &prices) {
    int totalCost = 0;
    for (int price : prices) {
        int cost = (price / 3);
        if (cost < 1) cost = 0; // round down to nearest integer
        else cost -= 2;
        totalCost += cost;
    }
    return totalCost;
}