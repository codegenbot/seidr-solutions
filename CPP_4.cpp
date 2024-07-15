float mean_absolute_deviation(vector<float> numbers){
    float mean = 0;
    for(float num : numbers){
        mean += num;
    }
    mean /= numbers.size();

    float deviation = 0;
    for(float num : numbers){
        deviation += fabs(num - mean);
    }
    deviation /= numbers.size();
    
    return deviation;
}