int prod_signs(vector<int> arr) {
    long long product = 1;
    long long sum = 0;
    int empty = 1;

    for (int num : arr) {
        if (!empty) {
            product *= sign(num);
            sum += abs(num);
        } else {
            empty = 0;
        }
    }

    return !empty ? product * sum : -32768;
}

long long sign(int num) {
    return num < 0 ? -1 : (num > 0 ? 1 : 0);
}