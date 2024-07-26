float sum = 0.0, mean, mad = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    return mad / numbers.size();
}