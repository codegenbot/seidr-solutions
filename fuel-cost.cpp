int calculateFuelCost(vector<int> prices) {
    int totalFuel = 0;
    for (int price : prices) {
        int cost = floor((double)price / 3) - 2;
        totalFuel += cost;
    }
    return totalFuel;
}