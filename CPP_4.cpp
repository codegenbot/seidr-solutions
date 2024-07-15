float mean = 0;
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();
    
    float sum_abs_diff = 0;
    for (float num : numbers) {
        sum_abs_diff += abs(num - mean);
    }
    
    return sum_abs_diff / numbers.size();
}