float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += abs(numbers[i] - accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size());
    }
    return sum / numbers.size();
}