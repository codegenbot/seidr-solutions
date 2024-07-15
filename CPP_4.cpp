int n = numbers.size();
    float sum = 0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / n;
    
    float mad = 0;
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    mad /= n;
    
    return mad;
}