int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= sign(num);
        sum += abs(num);
    }

    return sum * product;
}

int sign(int n) {
    if (n > 0) {
        return 1;
    } else if (n < 0) {
        return -1;
    } else {
        return 0;
    }
}