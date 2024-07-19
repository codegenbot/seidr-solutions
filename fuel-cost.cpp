int calculateFuelCost(vector<int>& cost) {
    int total = 0;
    for (int c : cost) {
        int result = (c / 3);
        if (result >= 1) {
            total += result - 2;
        }
    }
    return total;
}