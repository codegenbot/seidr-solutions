Here is the solution:

int calculateFuelCost(const vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = std::floor(result); // round down
        result -= 2;
        sum += result;
    }
    return sum;
}