int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int newNum = (num / 3) - 2;
        total += newNum;
    }
    return total;
}