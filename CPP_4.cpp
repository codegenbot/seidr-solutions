float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    float mean = sum / numbers.size();

    float sum_abs_diff = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum_abs_diff += abs(numbers[i] - mean);
    }

    return sum_abs_diff / numbers.size();
}