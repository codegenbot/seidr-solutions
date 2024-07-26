float sum = 0;
    float mean;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float mad = 0;
    for (float num : numbers) {
        mad += fabs(num - mean);
    }
    return mad / numbers.size();
}