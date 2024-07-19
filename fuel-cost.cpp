int fuelCost(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        int result = (num / 3);
        if (result < 1) {
            continue;
        }
        result--;
        sum += result;
    }
    return sum;
}