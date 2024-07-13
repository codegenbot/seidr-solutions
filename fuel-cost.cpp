int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3; // divide each by 3
        x = std::floor(x); // round down to the nearest integer
        sum += x - 2; // subtract 2 and add to sum
    }
    return sum;
}