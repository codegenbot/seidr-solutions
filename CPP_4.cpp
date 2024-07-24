float sum = 0.0;
    for (auto num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();

    float sum_diff = 0.0;
    for (auto num : numbers) {
        sum_diff += abs(num - mean);
    }

    return sum_diff / numbers.size();
}