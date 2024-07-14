int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = (x / 3);
        y = y - 2;
        sum += y;
    }
    return sum;
}