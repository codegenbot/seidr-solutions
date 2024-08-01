float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;

    for(float num : numbers){
        sum += num;
    }
    mean = sum / numbers.size();

    float mad_sum = 0;
    for(float num : numbers){
        mad_sum += abs(num - mean);
    }

    return mad_sum / numbers.size();
}