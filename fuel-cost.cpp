int fuelCost(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int num = (i / 3);
        num = num - 2;
        if(num < 0)
            num = 0;
        sum += num;
    }
    return sum;
}