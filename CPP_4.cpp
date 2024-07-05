int n = numbers.size();
    float sum = 0.0, mean = 0.0, mad = 0.0;

    // Calculate mean
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }
    mean = sum / n;

    // Calculate Mean Absolute Deviation
    for (int i = 0; i < n; ++i) {
        mad += fabs(numbers[i] - mean);
    }

    return mad / n;
}