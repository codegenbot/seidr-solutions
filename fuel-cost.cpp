int calculateFuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = floor(result); // round down to nearest integer
        sum += (result - 2); // subtract 2 and add to the sum
    }
    return sum;
}