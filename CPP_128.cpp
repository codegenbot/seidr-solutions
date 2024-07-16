if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum_magnitudes = 0;
    for (int num : arr) {
        if (num == 0) {
            product = 0;
        } else {
            sum_magnitudes += abs(num);
            product *= (num > 0) ? 1 : -1;
        }
    }

    return sum_magnitudes * product;
}