float sum = 0;
    for(float num : numbers){
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float absolute_sum = 0;
    for(float num : numbers){
        absolute_sum += abs(num - mean);
    }
    return absolute_sum / numbers.size();
}