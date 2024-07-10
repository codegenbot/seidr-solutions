int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int x = i / 3;
        sum += min(x, 1) - 2;
    }
    return sum;
}