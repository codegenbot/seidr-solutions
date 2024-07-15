float mean_absolute_deviation(vector<float> numbers){
    float sum = 0.0;
    float mean = 0.0;
    
    for(const auto& num : numbers){
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    float mad = 0.0;
    for(const auto& num : numbers){
        mad += abs(num - mean);
    }
    
    return mad / numbers.size();
}