float mean_absolute_deviation(vector<float> numbers){
    float mean = 0.0, total_abs_diff = 0.0;
    
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();
    
    for (float num : numbers) {
        total_abs_diff += fabs(num - mean);
    }
    
    return total_abs_diff / numbers.size();
}