int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}