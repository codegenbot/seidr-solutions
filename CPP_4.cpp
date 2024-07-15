float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    float sum_absolute_diff = 0.0;
    for (float num : numbers) {
        sum_absolute_diff += abs(num - mean);
    }
    return sum_absolute_diff / numbers.size();
}