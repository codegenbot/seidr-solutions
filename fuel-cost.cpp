int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        double temp = static_cast<double>(i) / 3; 
        temp = std::lround(temp); 
        sum += static_cast<int>(temp - 2); 
    }
    return sum;
}