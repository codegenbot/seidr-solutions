int prod_signs(vector<int> inputArr) {
    int product = 1;
    long long sum = 0;

    for (int num : inputArr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    if (inputArr.empty()) {
        return -32768;
    }

    return product * sum;
}