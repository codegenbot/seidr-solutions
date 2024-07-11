float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0; // Sum of absolute differences
    float mean = 0.0; // Mean of input numbers

    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    for (float num : numbers) {
        sum += abs(num - mean);
    }

    return sum / numbers.size();
}