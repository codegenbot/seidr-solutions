int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        if (num % 3 == 0) {
            sum += std::floor((double) (num / 3) - 2);
        }
    }
    return sum; }