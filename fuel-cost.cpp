int calculateFuelCost(vector<int> vec) {
    int total = 0;
    for (int num : vec) {
        if (num < 3) {
            total += 0;
        } else {
            int result = ((num / 3) - 2);
            total += result;
        }
    }
    return total;
}