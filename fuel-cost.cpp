int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = static_cast<int>(std::floor((double)i / 3));
        temp -= 2;
        sum += temp;
    }
    return sum;
}