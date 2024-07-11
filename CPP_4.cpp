float mean_absolute_deviation(vector<float> numbers){
    float sum = 0.0;
    for(float num : numbers){
        sum += num;
    }
    
    float mean = sum / numbers.size();
    float total_abs_diff = 0.0;
    
    for(float num : numbers){
        total_abs_diff += abs(num - mean);
    }
    
    return total_abs_diff / numbers.size();
}