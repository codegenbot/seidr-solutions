int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        if (num % 3 == 0) {
            sum += std::min(num / 3 - 2, 0);
        }
    }
    return sum; }