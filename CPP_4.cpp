float sum = 0.0;
    for(float num : numbers) {
        sum += num;
    }
    
    float mean = sum / numbers.size();
    
    float absolute_deviation_sum = 0.0;
    for(float num : numbers) {
        absolute_deviation_sum += abs(num - mean);
    }
    
    return absolute_deviation_sum / numbers.size();
}