int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = (i / 3);
        temp = floor(temp);
        sum += temp - 2;
    }
    return sum;
}