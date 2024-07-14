int calculateFuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = i / 3 - 2;
        if (val < 0)
            val = 0;
        sum += val;
    }
    return sum;
}