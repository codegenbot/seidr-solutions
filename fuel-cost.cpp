Here is the solution:

int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int newInt = (i / 3);
        if (newInt < 1) {
            newInt = 0;
        } else {
            newInt--;
        }
        sum += newInt;
    }
    return sum;
}