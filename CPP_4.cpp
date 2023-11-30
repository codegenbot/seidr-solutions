float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    float deviation = 0;
    float mad = 0;
    
    // Calculate the sum of all numbers
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    
    // Calculate the mean of the dataset
    mean = sum / numbers.size();
    
    // Calculate the deviation of each number from the mean
    for(int i=0; i<numbers.size(); i++){
        deviation += abs(numbers[i] - mean);
    }
    
    // Calculate the mean absolute deviation
    mad = deviation / numbers.size();
    
    return mad;
}