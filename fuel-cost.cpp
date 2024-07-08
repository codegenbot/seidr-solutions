int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        total += (num / 3 - 2);
    }
    return total;
}