int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = i / 3;
        if (val < 1) val = 0; // round down to nearest integer
        sum += val - 2;
    }
    return sum;
}