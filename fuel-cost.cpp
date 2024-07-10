int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int result = static_cast<int>(num / 3.0);
        result -= 2;
        sum += result;
    }
    return sum;
}