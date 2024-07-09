float mean = 0.0;
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float mad = 0.0;
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    mad /= numbers.size();

    return mad;
}