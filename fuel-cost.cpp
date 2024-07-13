Here is the solution:

int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        result = floor(result);
        result -= 2;
        sum += result;
    }
    return sum;
}