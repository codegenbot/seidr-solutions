Here is the solution:

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int result = (i / 3);
        result = floor(result);
        sum += (result - 2);
    }
    return sum;
}