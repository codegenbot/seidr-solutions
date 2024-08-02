int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = (x / 3);
        y = (y > 0 ? y - 2 : 0);
        sum += y;
    }
    return sum;
}