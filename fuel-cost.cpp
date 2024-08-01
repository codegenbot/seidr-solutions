int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = i / 3 - 2; // divide by 3 and subtract 2, then round down to nearest integer
        sum += temp;
    }
    return sum;
}