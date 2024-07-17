Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3) - 2;
        if (result < 0)
            result = 0;
        total += result;
    }
    return total;
}