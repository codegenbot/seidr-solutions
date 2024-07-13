Here is the solution:

int fuelCost(vector<int> &vec) {
    int sum = 0;
    for (int num : vec) {
        if (num < 3) {
            return 0;
        }
        int newNum = (num / 3 - 2);
        sum += newNum;
    }
    return sum;
}