int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double result = (double)i / 3;
        result = floor(result);
        sum += result - 2;
    }
    return sum;
}