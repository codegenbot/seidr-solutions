int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        result = std::floor(result); // round down to nearest integer
        sum += result - 2; // subtract 2 and add to the total sum
    }
    return sum;
}