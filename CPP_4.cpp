float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();
    
    float sum_diff = 0;
    for (float num : numbers) {
        sum_diff += abs(num - mean);
    }
    
    return sum_diff / numbers.size();
}