int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sign_product *= sign(num);
        sum_of_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sum_of_magnitudes * sign_product;
}

int sign(int num) {
    if (num > 0) {
        return 1;
    }
    if (num < 0) {
        return -1;
    }
    return 0;
}