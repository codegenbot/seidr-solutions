int calculateFuelCost(vector<int> &costs) {
    int total = 0;
    for (int cost : costs) {
        if (cost % 3 == 0) {
            cost /= 3;
        } else {
            cost = (cost / 3) + 1;
        }
        cost -= 2;
        total += cost;
    }
    return total;
}