Here is the solution:

int fuelCost(vector<int> v) {
    int sum = 0;
    for (auto x : v) {
        if (x % 3 == 0) {
            sum += (x / 3 - 2);
        } else {
            sum += (x / 3 - 1);
        }
    }
    return sum;
}