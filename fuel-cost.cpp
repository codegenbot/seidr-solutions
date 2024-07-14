int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        if (i < 3) continue;
        int temp = i / 3;
        temp = temp > 0 ? temp - 2 : 0;
        sum += temp;
    }
    return sum;
}