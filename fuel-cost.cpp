int fuelCost(vector<int> v) {
    int sum = 0;
    for (int x : v) {
        int y = (x / 3);
        if (y < 1) {
            y = 0;
        } else {
            y--;
        }
        sum += y;
    }
    return sum;
}