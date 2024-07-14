int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = ((num / 3) - 2);
        total += min(result, 0); // round down to nearest integer and subtract 2
    }
    return total;
}