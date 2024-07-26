float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    for(auto num : numbers){
        sum += num;
    }
    mean = sum / numbers.size();
    float mad = 0;
    for(auto num : numbers){
        mad += abs(num - mean);
    }
    mad /= numbers.size();
    return mad;
}