float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    float mean = sum / numbers.size();
    
    float deviation_sum = 0;
    for(int i=0; i<numbers.size(); i++){
        deviation_sum += abs(numbers[i] - mean);
    }
    
    float mad = deviation_sum / numbers.size();
    
    return mad;
}