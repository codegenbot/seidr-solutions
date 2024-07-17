int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int new_num = ((num / 3) - 2);
        sum += new_num;
    }
    return sum;
}