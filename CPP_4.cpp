float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    int n = numbers.size();
    for(int i=0; i<n; i++){
        sum += numbers[i];
    }
    float mean = sum / n;
    float deviation = 0;
    for(int i=0; i<n; i++){
        deviation += abs(numbers[i] - mean);
    }
    float mad = deviation / n;
    return mad;
}