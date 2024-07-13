Here is the solution:

int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (auto x : vec) {
        if (x < 3) {
            sum += 0;
        } else {
            int temp = (x / 3) - 2;
            sum += temp;
        }
    }
    return sum;
}