long long doubleTheDifference(vector<float> numbers) {
    long long oddSum = 0;
    for (float num : numbers) {
        if (num > 0 && modf(num, &num) == 0) {
            oddSum += pow(num, 2);
        }
    }
    return oddSum;
}