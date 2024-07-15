float sum = 0.0;
    float mean = 0.0;
    
    for (float num : numbers) {
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    float deviation_sum = 0.0;
    
    for (float num : numbers) {
        deviation_sum += abs(num - mean);
    }
    
    float mad = deviation_sum / numbers.size();
    
    return mad;
}