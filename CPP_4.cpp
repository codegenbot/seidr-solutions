float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    
    for (float num : numbers) {
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    float dev_sum = 0;
    
    for (float num : numbers) {
        dev_sum += abs(num - mean);
    }
    
    return dev_sum / numbers.size();
}