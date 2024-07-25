int totalFuelCost(vector<int> amounts) {
    int sum = 0;
    for (int amount : amounts) {
        int newAmount = (amount / 3) - 2;
        if (newAmount < 0) newAmount = 0;
        sum += newAmount;
    }
    return sum;
}