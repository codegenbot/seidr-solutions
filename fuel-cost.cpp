int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        if (num % 3 == 0) {
            sum += ((num / 3) - 2);
        }
    }
    return sum;
}