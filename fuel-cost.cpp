Here is the solution:

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int res = static_cast<int>(i / 3.0);
        sum += res - 2;
    }
    return sum;
}