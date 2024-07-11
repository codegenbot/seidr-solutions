int totalFuelCost(std::vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = std::floor((double)cost / 3.0) - 2;
        while (newCost >= 0) {
            sum += newCost;
            newCost /= 3.0;
            if(newCost >= 0)
                newCost--;
        }
    }
    return sum;
}