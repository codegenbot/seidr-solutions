int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = i / 3;
        temp = floor(temp);
        temp -= 2;
        sum += temp;
    }
    return sum;
}