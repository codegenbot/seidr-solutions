int fuelCost(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        sum += ((num / 3) - 2);
    }
    return sum;
}