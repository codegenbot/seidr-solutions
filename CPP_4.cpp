float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    
    for(float number : numbers) {
        sum += number;
    }
    
    mean = sum / numbers.size();
    
    float deviation = 0;
    
    for(float number : numbers) {
        deviation += abs(number - mean);
    }
    
    return deviation / numbers.size();
}