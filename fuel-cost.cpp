int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = x / 3 - (x % 9 == 0 ? 2 : 1);
        sum += y;
    }
    return sum;
}