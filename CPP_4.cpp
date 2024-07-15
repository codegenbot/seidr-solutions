float mean_absolute_deviation(vector<float> numbers){
    float sum = 0.0;
    for(auto num : numbers){
        sum += num;
    }
    float mean = sum / numbers.size();
    float absolute_deviation = 0.0;

    for(auto num : numbers){
        absolute_deviation += abs(num - mean);
    }

    return absolute_deviation / numbers.size();
}