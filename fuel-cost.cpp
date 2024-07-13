int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int val = (num / 3);
        val = (val > 0) ? val - 2 : 0;
        sum += val;
    }
    return sum;
}