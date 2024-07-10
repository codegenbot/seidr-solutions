int calculateFuelCost(vector<int> prices) {
    int totalCost = 0;
    for (int price : prices) {
        int cost = (price / 3); // divide by 3
        cost = std::floor(cost); // round down to nearest integer
        cost -= 2; // subtract 2
        totalCost += cost; // add to total cost
    }
    return totalCost;
}