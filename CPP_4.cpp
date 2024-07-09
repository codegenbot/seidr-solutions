float mean_absolute_deviation(vector<float> numbers){
    float sum = 0.0;
    float mean = 0.0;
    float mad = 0.0;

    for(float num : numbers) {
        sum += num;
    }

    mean = sum / numbers.size();

    for(float num : numbers) {
        mad += abs(num - mean);
    }

    mad /= numbers.size();

    return mad;
}