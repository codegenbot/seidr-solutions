Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        double result = (double)num / 3;
        int newNum = (int)floor(result);
        newNum -= 2;
        total += newNum;
    }
    return total;