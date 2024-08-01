Here is the solution:

int calculateFuelCost(vector<int>& numbers) {
    int total = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        newNum = (newNum > 0) ? newNum - 2 : 0;
        total += newNum;
    }
    return total;
}