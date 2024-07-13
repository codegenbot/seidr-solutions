int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int divided = num / 3;
        int rounded = floor(divided);
        int subtracted = rounded - 2;
        sum += subtracted;
    }
    return sum;
}