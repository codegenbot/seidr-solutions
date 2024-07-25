int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3;
        temp = temp > 0 ? temp - 1 : 0; // round down to nearest integer
        sum += temp;
    }
    return sum;
}