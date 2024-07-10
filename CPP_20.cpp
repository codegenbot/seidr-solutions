sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    int min_idx1 = 0, min_idx2 = 1;
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            min_idx1 = i;
            min_idx2 = i + 1;
        }
    }
    return {numbers[min_idx1], numbers[min_idx2]};
}