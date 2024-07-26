float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float mad = 0.0;
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    mad /= numbers.size();
    return mad;
}