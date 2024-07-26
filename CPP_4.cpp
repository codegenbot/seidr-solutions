float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float sum_absolute_diff = 0;
    for (float num : numbers) {
        sum_absolute_diff += abs(num - mean);
    }
    float mad = sum_absolute_diff / numbers.size();

    return mad;
}