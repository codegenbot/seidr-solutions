float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    
    // Calculate the sum of all numbers
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    
    // Calculate the mean of the dataset
    mean = sum / numbers.size();
    
    // Calculate the sum of absolute differences
    float sum_abs_diff = 0;
    for(int i = 0; i < numbers.size(); i++){
        sum_abs_diff += abs(numbers[i] - mean);
    }
    
    // Calculate the mean absolute deviation
    float mad = sum_abs_diff / numbers.size();
    
    return mad;
}