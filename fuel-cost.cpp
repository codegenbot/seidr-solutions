int fuelCost(std::vector<int> stations) {
    int sum = 0;
    for (auto station : stations) {
        sum += std::floor(station / 3.0) - 2;
    }
    return sum;
}