int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int num = i / 3;
        num = num > 0 ? num - 2 : 0;
        sum += num;
    }
    return sum;
}