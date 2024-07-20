int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;

    for (int num : arr) {
        if (num != 0) {
            product *= (num < 0 ? -1 : 1);
            sum += abs(num);
        }
    }

    return !arr.empty() ? sum * product : -32768;
}