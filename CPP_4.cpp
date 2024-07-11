float sum = 0;
    float mean;
    
    for (float num : numbers) {
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    float absolute_sum = 0;
    for (float num : numbers) {
        absolute_sum += abs(num - mean);
    }
    
    return absolute_sum / numbers.size();
}