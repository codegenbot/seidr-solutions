int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        int result = (number / 3) - 2;
        if (result < 0) {
            result = 0;
        }
        sum += result;
    }
    return sum;
}