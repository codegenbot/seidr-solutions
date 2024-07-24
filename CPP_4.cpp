float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0f;
    float mean = 0.0f;

    // Calculate the mean of the input vector
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    // Calculate the Mean Absolute Deviation
    sum = 0.0f;
    for (float num : numbers) {
        sum += abs(num - mean);
    }

    return sum / numbers.size();
}