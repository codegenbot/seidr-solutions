```
int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = std::floor((double)num / 3);
        sum += result - 2;
    }
    return sum;
}