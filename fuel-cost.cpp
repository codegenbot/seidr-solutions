int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3) - 2; // divide by 3, round down and subtract 2
        sum += newNum;
    }
    return sum;
}