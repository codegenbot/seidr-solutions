Here is the solution:

int calculateFuelCost(vector<int> &vec) {
    int sum = 0;
    for (auto num : vec) {
        if (num % 3 != 0) {
            continue;
        }
        int divided = num / 3;
        sum += --divided;
    }
    return sum;
}