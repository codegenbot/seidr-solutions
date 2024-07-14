int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        if (newNum < 1) newNum = 0; // round down to nearest integer
        sum += (newNum - 2); // subtract 2 and add to sum
    }
    return sum;
}