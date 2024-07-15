float sum = 0.0, mean, mad;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();
    sum = 0.0;
    for (float num : numbers) {
        sum += abs(num - mean);
    }
    mad = sum / numbers.size();
    return mad;
}