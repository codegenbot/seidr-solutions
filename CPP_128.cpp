if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num > 0) {
            product *= 1;
            sum += abs(num);
        } else if (num < 0) {
            product *= -1;
            sum += abs(num);
        } else {
            product *= 0;
        }
    }

    return product * sum;
}