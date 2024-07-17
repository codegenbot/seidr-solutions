int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int val = (num / 3 - 2);
        if (val < 0)
            val = 0;
        sum += val;
    }
    return sum;
}