int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // or any other value you want to return in this case
        }
        product *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        sum += abs(num);
    }

    return product * sum;
}