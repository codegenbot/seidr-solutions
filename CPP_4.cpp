float sum = 0.0, mean, mad = 0.0;
    int n = numbers.size();

    for (float num : numbers) {
        sum += num;
    }
    mean = sum / n;

    for (float num : numbers) {
        mad += fabs(num - mean);
    }

    return mad / n;
}