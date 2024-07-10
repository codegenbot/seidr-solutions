int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3;
        x = floor(x);
        x--;
        sum += x;
    }
    return sum;
}