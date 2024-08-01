int calculateFuelCost(vector<int>& numbers) {
    int totalFuelCost = 0;
    for (int number : numbers) {
        int result = number / 3 - 2;
        if (result < 0) {
            continue;
        }
        totalFuelCost += result;
    }
    return totalFuelCost;
}