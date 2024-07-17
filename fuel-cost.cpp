int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int newInt = (i / 3);
        if (newInt < 1) {
            newInt = 0;
        } else {
            newInt -= 2;
        }
        sum += newInt;
    }
    return sum;
}