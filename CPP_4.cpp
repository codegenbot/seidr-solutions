float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean;
    float deviation = 0;
    int n = numbers.size();
    
    // Calculate the sum of all elements
    for(int i=0; i<n; i++){
        sum += numbers[i];
    }
    
    // Calculate the mean
    mean = sum / n;
    
    // Calculate the deviation
    for(int i=0; i<n; i++){
        deviation += abs(numbers[i] - mean);
    }
    
    // Calculate the mean absolute deviation
    float mad = deviation / n;
    
    return mad;
}