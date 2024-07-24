int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += (i / 3 - 2);
    }
    return sum;
}