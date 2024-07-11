float sum = 0.0;
    float mean;
    
    for (float num : numbers) {
        sum += num;
    }
    mean = sum / numbers.size();

    float sum_abs_diff = 0.0;
    for (float num : numbers) {
        sum_abs_diff += abs(num - mean);
    }
    
    return sum_abs_diff / numbers.size();
}