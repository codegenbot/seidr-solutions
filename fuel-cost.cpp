int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        if (i % 3 == 0) {
            sum += (i / 3 - 2);
        }
    }
    return sum;
}