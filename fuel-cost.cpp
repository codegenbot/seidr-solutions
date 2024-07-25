int calculateFuelCost(vector<int> vec) {
    int total = 0;
    for (int i : vec) {
        int result = ((i / 3) - 2);
        total += result;
    }
    return total;
}