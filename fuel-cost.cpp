Here is the solution:

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = (i / 3);
        x = std::floor(x) - 2;
        if (x > 0)
            sum += x;
    }
    return sum;
}