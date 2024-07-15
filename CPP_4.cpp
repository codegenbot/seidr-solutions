float mean = 0.0;
    float sum = 0.0;
    
    for (float num : numbers) {
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    float abs_diff_sum = 0.0;
    
    for (float num : numbers) {
        abs_diff_sum += abs(num - mean);
    }
    
    float mad = abs_diff_sum / numbers.size();
    
    return mad;
}