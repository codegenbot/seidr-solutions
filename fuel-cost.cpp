int fuelCost(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        int temp = num / 3;
        temp = floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;
}