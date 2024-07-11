int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        sum += std::floor((double)cost / 3.0) - 2;
    }
    return sum;
}