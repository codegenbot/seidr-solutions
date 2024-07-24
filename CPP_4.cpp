float sum = 0;
    float mean = 0;
    
    for (float num : numbers) {
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    float deviation = 0;
    for (float num : numbers) {
        deviation += abs(num - mean);
    }
    
    return deviation / numbers.size();
}