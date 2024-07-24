int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int temp = i / 3;
        temp = temp > 0 ? temp - 2 : 0; // subtract 2 if result is positive, else set to 0
        sum += temp;
    }
    return sum;
}