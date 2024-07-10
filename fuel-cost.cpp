int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        result = std::floor(static_cast<double>(result)); 
        result -= 2; 
        sum += result;
    }
    return sum;
}