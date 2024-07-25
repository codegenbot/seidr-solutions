int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int temp = (num / 3);
        temp = (temp > 0) ? temp - 2 : 0;
        sum += temp;
    }
    return sum;
}