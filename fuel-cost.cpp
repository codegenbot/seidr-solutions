int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int newInt = (i / 3) - 2;
        sum += newInt;
    }
    return sum;
}