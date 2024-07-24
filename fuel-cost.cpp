int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = i / 3;
        temp = temp > 0 ? temp - 1 : 0; // round down to nearest integer and subtract 2
        sum += temp;
    }
    return sum;
}