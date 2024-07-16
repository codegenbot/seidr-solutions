int result = 1;
    int sum = 0;
    if (arr.empty()) {
        return -32768;
    }

    for (int num : arr) {
        result *= num < 0 ? -1 : (num == 0 ? 0 : 1);
        sum += abs(num);
    }

    return result * sum;
}