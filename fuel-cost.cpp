int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        int result = ((number / 3) - 2);
        sum += result;
    }
    return sum;
}