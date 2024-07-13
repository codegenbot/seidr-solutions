int calculateFuelCost(vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = (cost / 3);
        if (newCost >= 1) {
            newCost = newCost - 2;
        } else {
            newCost = 0;
        }
        sum += newCost;
    }
    return sum;
}