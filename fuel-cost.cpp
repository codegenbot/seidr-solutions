int fuelCost(vector<int> &v) {
    int sum = 0;
    for(int x : v) {
        int y = (x / 3);
        sum += (y - 2);
    }
    return sum;
}