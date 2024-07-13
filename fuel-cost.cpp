int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = num / 3;
        result = std::floor(result);
        result -= 2;
        total += result;
    }
    return total;
}