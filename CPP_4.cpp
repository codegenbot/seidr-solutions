float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float abs_diff_sum = 0.0;
    for (float num : numbers) {
        abs_diff_sum += abs(num - mean);
    }
    
    return abs_diff_sum / numbers.size();
}