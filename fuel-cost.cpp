Here is the solution:

int calculateFuelCost(vector<int> &prices) {
    int totalFuel = 0;
    for (int price : prices) {
        int cost = (price / 3 - 2);
        if (cost > 0)
            totalFuel += cost;
    }
    return totalFuel;
}