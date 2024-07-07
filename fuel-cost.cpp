int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = std::floor((num / 3.0)) - 2;
        sum += result;
    }
    return sum; }