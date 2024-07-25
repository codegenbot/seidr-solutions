long long doubleTheDifference(vector<int> a) {
    long long sum = 0;
    for (int num : a) {
        if (num > 0 && num % 2 == 0) {
            sum += pow(num, 2);
        }
    }
    return abs(sum - 0);
}