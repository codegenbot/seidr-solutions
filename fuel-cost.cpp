int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        result = floor(result);
        sum += result - 2;
    }
    return sum;
}