int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = static_cast<int>(i / 3.0);
        if (temp < 1) {
            temp = 0;
        } else {
            temp--;
        }
        sum += temp;
    }
    return sum;
}