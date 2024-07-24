Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        int result = (number / 3);
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
        total += result;
    }
    return total;
}