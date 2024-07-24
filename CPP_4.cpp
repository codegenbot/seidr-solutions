float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0;
    for (auto x : numbers) {
        sum += abs(x - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(vector<float> numbers) {
    float sum = 0.0;
    for (auto x : numbers) {
        sum += x;
    }
    return sum / numbers.size();
}