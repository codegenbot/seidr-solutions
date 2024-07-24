Here is the solution:

int calculateFuelCost(vector<int>& numbers) {
    int total = 0;
    for (int number : numbers) {
        int result = (number / 3) - 2;
        total += result;
    }
    return total;
}