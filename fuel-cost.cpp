int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += (i + 2) / 3 - 2;
    }
    return sum;
}