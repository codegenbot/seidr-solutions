Here is the solution:

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3;
        x = std::floor(x);
        x -= 2;
        sum += x;
    }
    return sum;
}