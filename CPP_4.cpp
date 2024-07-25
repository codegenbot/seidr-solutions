float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0f;
    float mean = 0.0f;

    for (float num : numbers) {
        sum += num;
    }

    mean = sum / numbers.size();

    float mad = 0.0f;
    for (float num : numbers) {
        mad += abs(num - mean);
    }

    return mad / numbers.size();
}