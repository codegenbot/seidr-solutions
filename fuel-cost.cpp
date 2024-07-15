int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = static_cast<int>(i / 3.0) - 2;
        sum += val;
    }
    return sum;
}