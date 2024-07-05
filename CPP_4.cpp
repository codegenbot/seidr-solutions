float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float mad_sum = 0;
    for (float num : numbers) {
        mad_sum += fabs(num - mean);
    }
    return mad_sum / numbers.size();
}