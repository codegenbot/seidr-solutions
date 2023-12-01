float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    float mad = 0;

    // Calculate the sum of all numbers
    for(float num : numbers){
        sum += num;
    }

    // Calculate the mean of the dataset
    mean = sum / numbers.size();

    // Calculate the mean absolute deviation
    for(float num : numbers){
        mad += abs(num - mean);
    }

    mad /= numbers.size();

    return mad;
}