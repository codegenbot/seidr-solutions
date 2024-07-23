int calculateFuelCost(vector<int>& numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3) - 2;
        total += result;
    }
    return total;
}