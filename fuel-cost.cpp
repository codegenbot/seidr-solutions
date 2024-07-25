int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        int result = (number / 3);
        result = floor(result);
        result -= 2;
        total += result;
    }
    return total;
}