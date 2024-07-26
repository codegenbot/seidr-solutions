float sum = 0.0;
    float mean = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float abs_diff_sum = 0.0;
    for (float num : numbers) {
        abs_diff_sum += fabs(num - mean);
    }

    return abs_diff_sum / numbers.size();
}