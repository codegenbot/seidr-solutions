float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float sum_diff = 0.0;
    for (float num : numbers) {
        sum_diff += abs(num - mean);
    }
    float mad = sum_diff / numbers.size();

    return mad;
}