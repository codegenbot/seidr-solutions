int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        int result = ((i / 3) - 2);
        if (result < 0)
            sum += 0;
        else
            sum += result;
    }
    return sum;
}