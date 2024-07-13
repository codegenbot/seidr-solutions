int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int num = (i / 3);
        num = floor(num);
        num -= 2;
        sum += num;
    }
    return sum;
}