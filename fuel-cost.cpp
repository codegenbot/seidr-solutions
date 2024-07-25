Here is the solution:

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int fuelCost = (price / 3) - 2;
        if (fuelCost > 0)
            total += fuelCost;
    }
    return total;