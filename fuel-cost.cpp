Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = (result > 0) ? (result - 2) : 0;
        sum += result;
    }
    return sum;
}