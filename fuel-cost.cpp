int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = (result > 0) ? (result - 1) : 0; // round down to nearest integer and subtract 2
        sum += result;
    }
    return sum;
}