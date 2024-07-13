Here is the solution:

int calculateFuelCost(const vector<int>& costs) {
    int total = 0;
    for (int cost : costs) {
        int fuel = static_cast<int>(cost / 3.0);
        if (fuel >= 1) {
            total += fuel - 2;
        }
    }
    return total;
}