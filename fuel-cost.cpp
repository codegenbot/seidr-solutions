int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        if (i % 3 == 1)
            sum += (i / 3 - 2);
        else
            sum += (i / 3 - 1);
    }
    return sum;
}