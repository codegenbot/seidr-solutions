int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = std::floor((double)cost / 3) - 2;
        if(newCost < 0) continue;
        sum += newCost;
    }
    return sum;