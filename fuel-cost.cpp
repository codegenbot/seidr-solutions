int calculateFuelCost(vector<int> inputs) {
    int total = 0;
    for (int num : inputs) {
        total += (num / 3 - 2);
    }
    return total;
}