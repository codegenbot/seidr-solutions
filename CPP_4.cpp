float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean;
    
    for(auto num : numbers){
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    float deviation = 0;
    for(auto num : numbers){
        deviation += abs(num - mean);
    }
    
    return deviation / numbers.size();
}