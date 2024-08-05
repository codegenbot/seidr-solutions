if (arr.empty()) {
        return -32768;
    }

    int sum = 0;
    int product = 1;

    for (int num : arr) {
        if (num > 0) {
            sum += num;
        } else if (num < 0) {
            sum -= num;
            product *= -1;
        }
    }

    return sum * product;
}