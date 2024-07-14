Here is the solution:

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int res = (num / 3) - 2;
        if (res < 0) {
            res = 0;
        }
        sum += res;
    }
    return sum;
}