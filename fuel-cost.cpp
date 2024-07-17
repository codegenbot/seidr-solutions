int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = i / 3;
        temp = temp > 0 ? temp - 1 : temp; // round down to nearest integer
        sum += temp;
    }
    return sum;
}