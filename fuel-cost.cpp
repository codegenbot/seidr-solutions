int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        sum += (x / 3) - 2;
    }
    return sum;
}