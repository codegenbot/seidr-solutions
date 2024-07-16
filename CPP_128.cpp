int result = 1;
    if (arr.empty()) {
        return -32768;
    }
    for (int num : arr) {
        if (num > 0) {
            result *= 1;
        } else if (num < 0) {
            result *= -1;
        }
    }
    int sumMags = 0;
    for (int num : arr) {
        sumMags += abs(num);
    }
    return result * sumMags;
}