int result = 0;
    int signProduct = 1;

    if (arr.empty()) {
        return -32768;
    }

    for (int num : arr) {
        if (num > 0) {
            signProduct *= 1;
        } else if (num < 0) {
            signProduct *= -1;
        }
        result += abs(num);
    }

    return result * signProduct;
}