int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        double result = ((double)num / 3);
        result = std::floor(result); 
        result -= 2; 
        sum += static_cast<int>(result);
    }
    return sum;
}