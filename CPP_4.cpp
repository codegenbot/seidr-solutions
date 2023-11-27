float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    float mean = sum / numbers.size();
    float deviation = 0;
    for(int i=0; i<numbers.size(); i++){
        deviation += abs(numbers[i] - mean);
    }
    float mad = deviation / numbers.size();
    return mad;
}