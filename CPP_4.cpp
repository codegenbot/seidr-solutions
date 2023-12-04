```
float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += abs(numbers[i] - mean(numbers));
    }
    return sum / numbers.size();
}
```