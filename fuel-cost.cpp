int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        if (num > 0) {
            int temp = (num / 3);
            temp -= 2;
            sum += temp < 0 ? 0 : temp;
        }
    }
    return sum;
}