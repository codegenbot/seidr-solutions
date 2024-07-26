float sum = 0;
    float mean = 0;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float deviation_sum = 0;
    for (float num : numbers) {
        deviation_sum += abs(num - mean);
    }

    return deviation_sum / numbers.size();
}