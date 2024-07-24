Here is the solution:

int calculateFuelCost(vector<int> &vec) {
    int total = 0;
    for (int i : vec) {
        int result = (i / 3);
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
        total += result;
    }
    return total;
}