int totalFuelCost(vector<int> &vec) {
    int sum = 0;
    for (int i : vec) {
        int newInt = i / 3 - 2;
        sum += newInt;
    }
    return sum;
}