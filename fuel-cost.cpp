Here is the solution:

int calculateFuelCost(vector<int>& inputs) {
    int total = 0;
    for (int i : inputs) {
        int result = (i / 3);
        if (result < 1) {
            result = 0;
        } else {
            result -= 2;
        }
        total += result;
    }
    return total;
}