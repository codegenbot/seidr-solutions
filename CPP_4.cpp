float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0f;
    for (auto num : numbers) {
        sum += abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(const vector<float>& numbers) {
    float sum = 0.0f;
    for (const auto& num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}