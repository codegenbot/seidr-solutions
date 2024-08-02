int fuelCost(vector<int> &fuel) {
    int sum = 0;
    for (int i : fuel) {
        int temp = i / 3;
        if (temp >= 1)
            sum += (temp - 2);
    }
    return sum;
}