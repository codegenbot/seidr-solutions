if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum_magnitude = 0;

    for (int num : arr) {
        if (num > 0) {
            product *= 1;
            sum_magnitude += num;
        } else if (num < 0) {
            product *= -1;
            sum_magnitude += abs(num);
        }
    }

    return product * sum_magnitude;
}