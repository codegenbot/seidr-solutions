if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum = 0;

    for (int num : arr) {
        sum += abs(num);
        product *= (num == 0) ? 0 : (num > 0 ? 1 : -1);
    }

    return sum * product;
}