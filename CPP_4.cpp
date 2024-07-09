float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float absolute_deviation_sum = 0.0;
    for (float num : numbers) {
        absolute_deviation_sum += abs(num - mean);
    }
    float mean_absolute_deviation = absolute_deviation_sum / numbers.size();

    return mean_absolute_deviation;
}