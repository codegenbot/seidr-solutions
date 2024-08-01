int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int val = i / 3 - 2;
        sum += val;
    }
    return sum;
}