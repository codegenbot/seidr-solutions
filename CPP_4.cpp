float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    float mad = 0;
    int size = numbers.size();

    for(int i=0; i<size; i++){
        sum += numbers[i];
    }

    mean = sum / size;

    for(int i=0; i<size; i++){
        mad += abs(numbers[i] - mean);
    }

    mad /= size;

    return mad;
}