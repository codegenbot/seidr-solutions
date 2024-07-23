int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        if (num % 3 == 0) {
            int result = (num / 3);
            result--;
            sum += result;
        } else {
            int result = ((num - 1) / 3);
            result--;
            sum += result;
        }
    }
    return sum;
}