int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        if (i < 3) {
            sum += i - 2;
        } else {
            int temp = (i / 3);
            sum += --temp;
        }
    }
    return sum;
}