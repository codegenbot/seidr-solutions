int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += ((num / 3) - 2);
    }
    return sum;
}