float mean_absolute_deviation(vector<float> numbers){
    float sum = 0.0;
    for(auto num : numbers){
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float deviation_sum = 0.0;
    for(auto num : numbers){
        deviation_sum += abs(num - mean);
    }
    
    return deviation_sum / numbers.size();
}