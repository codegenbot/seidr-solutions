float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0; // Initialize sum to zero
    for (int i = 0; i < numbers.size(); i++) { 
        sum += abs(numbers[i] - mean(numbers.begin(), numbers.end())); 
    }
    return sum / numbers.size();
}