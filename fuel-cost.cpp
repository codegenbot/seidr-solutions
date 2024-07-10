int totalFuelCost(vector<int>& cost) {
    int sum = 0;
    for (int c : cost) {
        int newCost = ((c / 3) - 2);
        sum += newCost;
    }
    return sum;
}