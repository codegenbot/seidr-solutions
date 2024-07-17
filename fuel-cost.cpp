int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int num = (i / 3);
        num = std::floor(num) - 2;
        sum += num;
    }
    return sum;
}