float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    float mean = 0;
    
    for (float num : numbers) {
        if (mean == 0)
            mean = num;
        else
            mean = (mean + num) / 2;
    }
    
    for (float num : numbers) {
        sum += abs(num - mean);
    }
    
    return sum / numbers.size();
}