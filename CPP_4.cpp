float sum = 0.0;
    for(float num : numbers){
        sum += num;
    }
    float mean = sum / numbers.size();

    float deviation = 0.0;
    for(float num : numbers){
        deviation += fabs(num - mean);
    }
    return deviation / numbers.size();
}