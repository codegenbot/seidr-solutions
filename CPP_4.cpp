float sum = 0;
    float mean = 0;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float mad = 0;
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    return mad / numbers.size();
}