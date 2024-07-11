if (arr.empty()) {
        return -32768;
    }

    int sum = 0;
    int sign_product = 1;

    for (int num : arr) {
        if (num > 0) {
            sign_product *= 1;
        } else if (num < 0) {
            sign_product *= -1;
        }

        sum += abs(num);
    }

    return sum * sign_product;
}