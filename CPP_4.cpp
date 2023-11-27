float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0;
    int n = numbers.size();
    
    // Calculate the mean
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / n;

    // Calculate the sum of absolute differences
    float diffSum = 0.0;
    for (float num : numbers) {
        diffSum += abs(num - mean);
    }
    
    // Calculate the mean absolute deviation
    float mad = diffSum / n;
    
    return mad;
}