int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        sum += temp - 2;
    }
    return sum;
}