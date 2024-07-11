int sum = 0;
    int product = 1;

    if (arr.empty()) {
        return -32768;
    }

    for (int num : arr) {
        sum += abs(num);
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        }
    }

    return sum * product;
}