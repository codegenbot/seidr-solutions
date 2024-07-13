int calculateFuelCost(vector<int> numbers) {
    int totalFuelCost = 0;
    for (int number : numbers) {
        int result = (number / 3);
        if (result < 1) {
            result = 0;
        } else {
            result -= 2;
        }
        totalFuelCost += result;
    }
    return totalFuelCost;
}