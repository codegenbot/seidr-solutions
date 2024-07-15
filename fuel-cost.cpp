int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = static_cast<int>(double(i)/3);
        result -= 2; 
        sum += result;
    }
    return sum;
}