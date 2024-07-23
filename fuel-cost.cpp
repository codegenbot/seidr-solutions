int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += std::max(0, std::floor(i / 3.0) - 2);
    }
    return sum;
}