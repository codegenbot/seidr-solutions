float mean_absolute_deviation(vector<float> numbers) {
    float mean = 0;
    for (int i = 0; i < numbers.size(); i++) {
        mean += numbers[i];
    }
    mean /= numbers.size();

    float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += abs(numbers[i] - mean);
    }

    return sum / numbers.size();
}