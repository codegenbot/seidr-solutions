int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        if (i % 3 == 0) {
            sum += (i / 3 - 2);
        }
    }
    return sum;
}