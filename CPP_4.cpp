float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for(auto num : numbers)
        sum += num;
    float mean = sum / numbers.size();
    
    float dev_sum = 0;
    for(auto num : numbers)
        dev_sum += abs(num - mean);
    
    return dev_sum / numbers.size();
}