float mean_absolute_deviation(vector<float> numbers){
    float sum = 0.0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    float mean = sum / numbers.size();

    float deviationSum = 0.0;
    for (int i = 0; i < numbers.size(); i++) {
        deviationSum += abs(numbers[i] - mean);
    }
    float mad = deviationSum / numbers.size();

    return mad;
}