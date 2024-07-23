int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int temp = (num / 3);
        sum += (temp - 2);
    }
    return sum;
}