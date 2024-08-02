Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        newNum = std::floor(newNum) - 2;
        sum += newNum;
    }
    return sum;
}