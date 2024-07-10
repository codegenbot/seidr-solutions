int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        double result = std::floor((num / 3.0));
        result -= 2; 
        sum += static_cast<int>(result);
    }
    return sum;
}