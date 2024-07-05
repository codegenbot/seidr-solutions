int n = numbers.size();
    if (n == 0) return 0.0;

    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / n;

    float mad_sum = 0.0;
    for (float num : numbers) {
        mad_sum += fabs(num - mean);
    }

    return mad_sum / n;
}