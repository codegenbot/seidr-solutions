float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float total_deviation = 0;
    for (float num : numbers) {
        total_deviation += abs(num - mean);
    }
    
    return total_deviation / numbers.size();
}