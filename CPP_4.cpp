```cpp
float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(std::vector<float> numbers) {
    if(numbers.empty()) 
        return 0; // or any default value
    return std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}