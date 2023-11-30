float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean;
    
    // Calculate the mean
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    mean = sum / numbers.size();
    
    // Calculate the mean absolute deviation
    float mad = 0;
    for(int i=0; i<numbers.size(); i++){
        mad += abs(numbers[i] - mean);
    }
    mad /= numbers.size();
    
    return mad;
}