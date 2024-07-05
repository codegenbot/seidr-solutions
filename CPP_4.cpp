float sum = 0.0;
    for(float number : numbers) {
        sum += number;
    }
    float mean = sum / numbers.size();
    
    float mad_sum = 0.0;
    for(float number : numbers) {
        mad_sum += fabs(number - mean);
    }
    return mad_sum / numbers.size();
}