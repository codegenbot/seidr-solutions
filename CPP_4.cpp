float mean_absolute_deviation(vector<float> numbers){
    float mean = 0.0;
    for(int i = 0; i < numbers.size(); i++){
        mean += numbers[i];
    }
    mean /= numbers.size();
    
    float mad = 0.0;
    for(int i = 0; i < numbers.size(); i++){
        mad += abs(numbers[i] - mean);
    }
    mad /= numbers.size();
    
    return mad;
}