int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3) - 2;
        if (newNum < 0) {
            newNum = 0;
        }
        sum += newNum;
    }
    return sum;
}