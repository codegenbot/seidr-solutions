float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation = 0;
    for (float num : numbers) {
        deviation += abs(num - mean);
    }
    float mad = deviation / numbers.size();

    return mad;
}