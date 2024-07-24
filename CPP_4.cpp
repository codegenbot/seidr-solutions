float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0;
    float mean = 0.0;

    for (float num : numbers) {
        sum += num;
    }

    mean = sum / numbers.size();

    sum = 0.0;
    for (float num : numbers) {
        sum += abs(num - mean);
    }

    return sum / numbers.size();
}