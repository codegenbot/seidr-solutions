Here is the solution:

int calculateFuelCost(vector<int> &numbers) {
    int total = 0;
    for (int num : numbers) {
        if (num > 0) {
            int result = (num / 3) - 2;
            total += result;
        }
    }
    return total;
}