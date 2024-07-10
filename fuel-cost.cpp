Here is the solution:

int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        int num = i / 3 - 2;
        if (num < 0) num = 0;
        sum += num;
    }
    return sum;
}