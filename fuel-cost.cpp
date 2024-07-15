int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3) - static_cast<int>(std::floor(double(i)/3)); 
        result -= 2; 
        sum += result;
    }
    return sum;
}