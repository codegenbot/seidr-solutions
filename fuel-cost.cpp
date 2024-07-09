int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3) - 2;
        temp = std::floor(temp + 0.5);
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    }
    return sum;
}