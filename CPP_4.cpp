float mean_absolute_deviation(vector<float> numbers) {
    float mean = 0.0f;
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float sum_diffs = 0.0f;
    for (float num : numbers) {
        sum_diffs += abs(num - mean);
    }

    return sum_diffs / numbers.size();
}