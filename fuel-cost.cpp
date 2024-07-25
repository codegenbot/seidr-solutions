int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int number : numbers) {
        if (number < 3) {
            sum += 0;
        } else {
            int result = (number - 2) / 3;
            sum += result;
        }
    }
    return sum;
}